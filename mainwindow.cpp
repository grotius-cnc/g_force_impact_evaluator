#include "mainwindow.h"
#include "./ui_mainwindow.h"

bool init=0;

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

//! Calculate a gforce given a 3 point arc and a velocity.
void MainWindow::on_pushButton_get_gforce_pressed()
{
    //! Gui arc points to vector3d.
    Eigen::Vector3d p0{ui->lineEdit_p0_x->text().toDouble(),
                ui->lineEdit_p0_y->text().toDouble(),
                ui->lineEdit_p0_z->text().toDouble()};

    Eigen::Vector3d p1{ui->lineEdit_p1_x->text().toDouble(),
                ui->lineEdit_p1_y->text().toDouble(),
                ui->lineEdit_p1_z->text().toDouble()};

    Eigen::Vector3d p2{ui->lineEdit_p2_x->text().toDouble(),
                ui->lineEdit_p2_y->text().toDouble(),
                ui->lineEdit_p2_z->text().toDouble()};


    //! Gui given speed.
    float speed_mm_min=ui->lineEdit_speed->text().toDouble();
    float speed_mm_sec = speed_mm_min / 60;
    ui->label_speed_mm_sec->setText(QString::number(speed_mm_sec));

    //! Calculate arc. (get centerpoint, etc).
    ARC arc=arcpoints().getArc(p0,p1,p2,20);


    //! Calculate rps [rev/sec].
    //! speed [mm/sec]
    float rps=speed_mm_sec/arc.circumFence;
    std::cout<<"rps:"<<rps<<std::endl;

    //! Calculate g-force. The formula for the acceleration of a centrifuge is: a = 4 π² r n²
    //! https://rechneronline.de/g-acceleration/centrifuge.php
    //! Radius [mm]
    //! Rps [rev/s]
    float a=4*(M_PI*M_PI)*arc.radius*(rps*rps);

    //! Conversions.
    std::cout<<"gforce [mm/s2]:"<<a<<std::endl;
    a*=0.001;
    std::cout<<"gforce [m/s2]:"<<a<<std::endl;
    a*=0.1;
    std::cout<<"gforce [g]:"<<a<<std::endl;

    //! Result.
    float gforce=a;

    //! Update gui with results.
    ui->label_g_force->setText(QString::number(gforce));
    ui->label_g_force_ms2->setText(QString::number(gforce*10));
    ui->label_rev_sec->setText(QString::number(rps));

    //! Graphics draw.
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

//! Get the maximal velocity for a path, given a 3 point arc and a maximal gforce.
void MainWindow::on_pushButton_get_max_velocity_pressed()
{
    Eigen::Vector3d p0{ui->lineEdit_p0_x->text().toDouble(),
                ui->lineEdit_p0_y->text().toDouble(),
                ui->lineEdit_p0_z->text().toDouble()};

    Eigen::Vector3d p1{ui->lineEdit_p1_x->text().toDouble(),
                ui->lineEdit_p1_y->text().toDouble(),
                ui->lineEdit_p1_z->text().toDouble()};

    Eigen::Vector3d p2{ui->lineEdit_p2_x->text().toDouble(),
                ui->lineEdit_p2_y->text().toDouble(),
                ui->lineEdit_p2_z->text().toDouble()};

    ARC arc=arcpoints().getArc(p0,p1,p2,20);


    float max_gforce=ui->lineEdit_max_gforce->text().toDouble();

    //! Original formula :
    //! float a=4*(M_PI*M_PI)*arc.radius * (rps*rps);

    //! Conversion.
    //! std::cout<<"gforce [mm/s2]:"<<a<<std::endl;
    //! a*=0.001;
    //! std::cout<<"gforce [m/s2]:"<<a<<std::endl;
    //! a*=0.1;
    //! std::cout<<"gforce [g]:"<<a<<std::endl;
    //!
    //! Formula to retrieve revolution a second.
    float rps = sqrt( (max_gforce*10000) /*[g] to [mm/s2]*/ / (4*(M_PI*M_PI)*arc.radius));

    //! [Revolutions/sec].
    std::cout<<"rps:"<<rps<<std::endl;

    //! [mm/sec]
    float velocity=rps*arc.circumFence;

    //! [mm/sec]
    ui->label_max_velocity_mm_sec->setText(QString::number(velocity));
    //! [mm/min]
    ui->label_max_velocity_mm_min->setText(QString::number(velocity*60));
}

//! Get gforce into corners.
void MainWindow::on_pushButton_gforce_line_line_pressed()
{
    //! Gui arc points to vector3d.
    Eigen::Vector3d p1{ui->lineEdit_p0_x->text().toDouble(),
                ui->lineEdit_p0_y->text().toDouble(),
                ui->lineEdit_p0_z->text().toDouble()};

    Eigen::Vector3d p2{ui->lineEdit_p1_x->text().toDouble(),
                ui->lineEdit_p1_y->text().toDouble(),
                ui->lineEdit_p1_z->text().toDouble()};

    Eigen::Vector3d p3{ui->lineEdit_p2_x->text().toDouble(),
                ui->lineEdit_p2_y->text().toDouble(),
                ui->lineEdit_p2_z->text().toDouble()};

    Eigen::Vector3d v1 = p2-p1;
    Eigen::Vector3d v2 = p3-p2;

    v1.normalize();
    v2.normalize();

    //! Normalized, then from normalized 1 to 0.1 mm.
    Eigen::Vector3d pa={0,0,0};
    Eigen::Vector3d pb={v1.x()*0.1,v1.y()*0.1,v1.z()*0.1};
    Eigen::Vector3d pc={(v1.x()*0.1)+(v2.x()*0.1), (v1.y()*0.1)+(v2.y()*0.1), (v1.z()*0.1)+(v2.z()*0.1)};

    std::cout<<"pa x:"<<pa.x()<<" y:"<<pa.y()<<" z:"<<pa.z()<<std::endl;
    std::cout<<"pb x:"<<pb.x()<<" y:"<<pb.y()<<" z:"<<pb.z()<<std::endl;
    std::cout<<"pc x:"<<pc.x()<<" y:"<<pc.y()<<" z:"<<pc.z()<<std::endl;


    //! Gui given speed.
    float speed_mm_min=ui->lineEdit_speed->text().toDouble();
    float speed_mm_sec = speed_mm_min / 60;
    ui->label_speed_mm_sec->setText(QString::number(speed_mm_sec));

    //! Calculate arc. (get centerpoint, etc).
    ARC arc=arcpoints().getArc(pa,pb,pc,20);


    //! Calculate rps [rev/sec].
    //! speed [mm/sec]
    float rps=speed_mm_sec/arc.circumFence;
    std::cout<<"rps:"<<rps<<std::endl;

    //! Calculate g-force. The formula for the acceleration of a centrifuge is: a = 4 π² r n²
    //! https://rechneronline.de/g-acceleration/centrifuge.php
    //! Radius [mm]
    //! Rps [rev/s]
    float a=4*(M_PI*M_PI)*arc.radius*(rps*rps);

    //! Conversions.
    std::cout<<"gforce [mm/s2]:"<<a<<std::endl;
    a*=0.001;
    std::cout<<"gforce [m/s2]:"<<a<<std::endl;
    a*=0.1;
    std::cout<<"gforce [g]:"<<a<<std::endl;

    ui->label_gforce_corner->setText(QString::number(a));
    ui->label_rps_gforce_corner->setText(QString::number(rps));
}












