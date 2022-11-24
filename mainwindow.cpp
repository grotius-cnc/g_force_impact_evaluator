#include "mainwindow.h"
#include "./ui_mainwindow.h"

bool init=0;
float g_force_previous=0;
ARC arc;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    myOcct = new Opencascade(this);

    ui->gridLayout_opencascade->addWidget(myOcct);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_exec_pressed()
{
    ui->label_g_force_previous->setText(QString::number(arc.gforce));

    Eigen::Vector3d p0{ui->lineEdit_p0_x->text().toDouble(),
                ui->lineEdit_p0_y->text().toDouble(),
                ui->lineEdit_p0_z->text().toDouble()};

    Eigen::Vector3d p1{ui->lineEdit_p1_x->text().toDouble(),
                ui->lineEdit_p1_y->text().toDouble(),
                ui->lineEdit_p1_z->text().toDouble()};

    Eigen::Vector3d p2{ui->lineEdit_p2_x->text().toDouble(),
                ui->lineEdit_p2_y->text().toDouble(),
                ui->lineEdit_p2_z->text().toDouble()};

    //! In this case a preprocess is done.
    //! The 3 input points input are concidered moving along the arc circumfence.
    //! A tiny arc fragment of the arc is used to determine the g-force.
    if(ui->checkBox_evaluate_as_arc->isChecked()){
        //! Get arc points.
        ARC preprocess_arc=weights().process(p0,p1,p2,0);

        //! Set the first 3 arc points as fragmened input. This is a tiny piece of the arc used
        //! to calculate a more precise gforce, instead of a line-line input, wich can be cruel if
        //! the path is more like a arc.
        p0={preprocess_arc.pntVec.at(0).x,preprocess_arc.pntVec.at(0).y,preprocess_arc.pntVec.at(0).z};
        p1={preprocess_arc.pntVec.at(1).x,preprocess_arc.pntVec.at(1).y,preprocess_arc.pntVec.at(1).z};
        p2={preprocess_arc.pntVec.at(2).x,preprocess_arc.pntVec.at(2).y,preprocess_arc.pntVec.at(2).z};
    }

    float speed_mm_min=ui->lineEdit_speed->text().toDouble();
    float speed_mm_sec = speed_mm_min / 60;
    ui->label_speed_mm_sec->setText(QString::number(speed_mm_sec));
    arc=weights().process(p0,p1,p2,speed_mm_sec);
    ui->label_g_force->setText(QString::number(arc.gforce));
    ui->label_rev_sec->setText(QString::number(arc.rev_sec));

    if(arc.pntVec.size()>2){ //! Vector safe.

        Handle(AIS_Shape) aShape=draw_primitives().draw_3d_line({p0.x(),p0.y(),p0.z()},{p1.x(),p1.y(),p1.z()});
        aShape=draw_primitives().colorize(aShape,Quantity_NOC_BLUE,0.9);
        myOcct->show_shape(aShape);

        Handle(AIS_Shape) aShape1=draw_primitives().draw_3d_line({p1.x(),p1.y(),p1.z()},{p2.x(),p2.y(),p2.z()});
        aShape1=draw_primitives().colorize(aShape1,Quantity_NOC_BLUE,0.9);
        myOcct->show_shape(aShape1);

        if(!init){
            //! Draw axis.
            Handle(AIS_Shape) aShape1=draw_primitives().draw_3d_line({0,0,0},{100,0,0});
            aShape1=draw_primitives().colorize(aShape1,Quantity_NOC_RED,0.9);
            myOcct->show_shape(aShape1);

            Handle(AIS_Shape) aShape2=draw_primitives().draw_3d_line({0,0,0},{0,100,0});
            aShape2=draw_primitives().colorize(aShape2,Quantity_NOC_GREEN,0.9);
            myOcct->show_shape(aShape2);

            Handle(AIS_Shape) aShape3=draw_primitives().draw_3d_line({0,0,0},{0,0,100});
            aShape3=draw_primitives().colorize(aShape3,Quantity_NOC_BLUE,0.9);
            myOcct->show_shape(aShape3);
            init=1;
        }

        //! Draw arc center.
        Handle(AIS_Shape) aShapeCenterPoint=draw_primitives().draw_3d_point({arc.center.x,
                                                                             arc.center.y,
                                                                             arc.center.z});
        myOcct->show_shape(aShapeCenterPoint);

        //! Copy result to a occt pointvec.
        std::vector<gp_Pnt> gpVec;

        for(uint i=0; i<arc.pntVec.size(); i++){
            gpVec.push_back({arc.pntVec.at(i).x,
                             arc.pntVec.at(i).y,
                             arc.pntVec.at(i).z});
        }

        Handle(AIS_Shape) aShape4=draw_primitives().draw_3d_line_wire(gpVec);
        myOcct->show_shape(aShape4);
    } else {
        std::cout<<"error, pointvec size to small."<<std::endl;
    }

    myOcct->redraw();
}












