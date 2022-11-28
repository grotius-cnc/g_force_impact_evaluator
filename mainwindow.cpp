#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <math.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_calculate_pressed()
{
    float radius=ui->lineEdit_accuracy->text().toDouble();
    float velocity_mm_min=ui->lineEdit_velocity->text().toDouble();

    float velocity_mm_sec=velocity_mm_min/60;
    ui->label_velocity_mm_sec->setText(QString::number(velocity_mm_sec));

    float diameter=2*radius;
    ui->label_diameter->setText(QString::number(diameter));

    float circumfence=M_PI*diameter;
    ui->label_circumfence->setText(QString::number(circumfence));

    float rps=velocity_mm_sec/circumfence;
    ui->label_rps->setText(QString::number(rps));

    //! The formula for the acceleration of a centrifuge is: a = 4 π² r n²
    float a=4*(M_PI*M_PI)*radius*(rps*rps);
    ui->label_gforce_mm_secsec->setText(QString::number(a));

    //! Convert from [mm/s2] to [g]
    ui->label_gforce_g->setText(QString::number(a*0.0001));


}
















