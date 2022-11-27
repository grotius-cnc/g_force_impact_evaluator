/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_11;
    QFrame *frame;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_max_velocity_mm_sec;
    QLabel *label_23;
    QLabel *label_max_velocity_mm_min;
    QLabel *label_25;
    QLineEdit *lineEdit_max_gforce;
    QLabel *label_29;
    QLabel *label_22;
    QPushButton *pushButton_get_max_velocity;
    QFrame *frame_2;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_4;
    QLabel *label_g_force;
    QLabel *label_21;
    QLabel *label_rev_sec;
    QLabel *label_26;
    QLabel *label_16;
    QLabel *label_27;
    QLabel *label_13;
    QLabel *label_g_force_ms2;
    QLineEdit *lineEdit_speed;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_speed_mm_sec;
    QLabel *label_24;
    QLabel *label_28;
    QLabel *label_14;
    QLabel *label_18;
    QPushButton *pushButton_get_gforce;
    QFrame *frame_3;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_p0_z;
    QLineEdit *lineEdit_p0_y;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_p0_x;
    QLabel *label_4;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_p1_x;
    QLineEdit *lineEdit_p1_y;
    QLineEdit *lineEdit_p1_z;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_11;
    QLineEdit *lineEdit_p2_x;
    QLineEdit *lineEdit_p2_z;
    QLineEdit *lineEdit_p2_y;
    QLabel *label_10;
    QTextBrowser *textBrowser;
    QFrame *frame_4;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_opencascade;
    QFrame *frame_5;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_12;
    QLabel *label_32;
    QPushButton *pushButton_gforce_line_line;
    QLabel *label_30;
    QLabel *label_gforce_corner;
    QLabel *label_31;
    QLabel *label_33;
    QLabel *label_rps_gforce_corner;
    QLabel *label_34;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(502, 904);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 57, 59);\n"
"color: rgb(255, 255, 255);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 57, 59);\n"
"color: rgb(255, 255, 255);\n"
""));
        gridLayout_11 = new QGridLayout(centralwidget);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_19 = new QLabel(frame);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_6->addWidget(label_19, 1, 0, 1, 1);

        label_20 = new QLabel(frame);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_6->addWidget(label_20, 2, 0, 1, 1);

        label_max_velocity_mm_sec = new QLabel(frame);
        label_max_velocity_mm_sec->setObjectName(QString::fromUtf8("label_max_velocity_mm_sec"));

        gridLayout_6->addWidget(label_max_velocity_mm_sec, 2, 1, 1, 1);

        label_23 = new QLabel(frame);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_6->addWidget(label_23, 2, 2, 1, 1);

        label_max_velocity_mm_min = new QLabel(frame);
        label_max_velocity_mm_min->setObjectName(QString::fromUtf8("label_max_velocity_mm_min"));

        gridLayout_6->addWidget(label_max_velocity_mm_min, 3, 1, 1, 1);

        label_25 = new QLabel(frame);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_6->addWidget(label_25, 3, 2, 1, 1);

        lineEdit_max_gforce = new QLineEdit(frame);
        lineEdit_max_gforce->setObjectName(QString::fromUtf8("lineEdit_max_gforce"));

        gridLayout_6->addWidget(lineEdit_max_gforce, 1, 1, 1, 1);

        label_29 = new QLabel(frame);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_6->addWidget(label_29, 1, 2, 1, 1);

        label_22 = new QLabel(frame);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_6->addWidget(label_22, 0, 0, 1, 2);

        pushButton_get_max_velocity = new QPushButton(frame);
        pushButton_get_max_velocity->setObjectName(QString::fromUtf8("pushButton_get_max_velocity"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_get_max_velocity->sizePolicy().hasHeightForWidth());
        pushButton_get_max_velocity->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(pushButton_get_max_velocity, 0, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);


        gridLayout_11->addWidget(frame, 3, 0, 1, 2);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frame_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_g_force = new QLabel(frame_2);
        label_g_force->setObjectName(QString::fromUtf8("label_g_force"));

        gridLayout_4->addWidget(label_g_force, 2, 1, 1, 1);

        label_21 = new QLabel(frame_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_4->addWidget(label_21, 3, 2, 1, 1);

        label_rev_sec = new QLabel(frame_2);
        label_rev_sec->setObjectName(QString::fromUtf8("label_rev_sec"));

        gridLayout_4->addWidget(label_rev_sec, 4, 1, 1, 1);

        label_26 = new QLabel(frame_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_4->addWidget(label_26, 4, 2, 1, 1);

        label_16 = new QLabel(frame_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 4, 0, 1, 1);

        label_27 = new QLabel(frame_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_4->addWidget(label_27, 5, 2, 1, 1);

        label_13 = new QLabel(frame_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_4->addWidget(label_13, 2, 0, 1, 1);

        label_g_force_ms2 = new QLabel(frame_2);
        label_g_force_ms2->setObjectName(QString::fromUtf8("label_g_force_ms2"));

        gridLayout_4->addWidget(label_g_force_ms2, 3, 1, 1, 1);

        lineEdit_speed = new QLineEdit(frame_2);
        lineEdit_speed->setObjectName(QString::fromUtf8("lineEdit_speed"));

        gridLayout_4->addWidget(lineEdit_speed, 1, 1, 1, 1);

        label_15 = new QLabel(frame_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_4->addWidget(label_15, 5, 0, 1, 1);

        label_17 = new QLabel(frame_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 3, 0, 1, 1);

        label_speed_mm_sec = new QLabel(frame_2);
        label_speed_mm_sec->setObjectName(QString::fromUtf8("label_speed_mm_sec"));

        gridLayout_4->addWidget(label_speed_mm_sec, 5, 1, 1, 1);

        label_24 = new QLabel(frame_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_4->addWidget(label_24, 2, 2, 1, 1);

        label_28 = new QLabel(frame_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_4->addWidget(label_28, 1, 2, 1, 1);

        label_14 = new QLabel(frame_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_4->addWidget(label_14, 1, 0, 1, 1);

        label_18 = new QLabel(frame_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 0, 0, 1, 2);

        pushButton_get_gforce = new QPushButton(frame_2);
        pushButton_get_gforce->setObjectName(QString::fromUtf8("pushButton_get_gforce"));
        sizePolicy.setHeightForWidth(pushButton_get_gforce->sizePolicy().hasHeightForWidth());
        pushButton_get_gforce->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_get_gforce, 0, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_4, 0, 0, 1, 1);


        gridLayout_11->addWidget(frame_2, 2, 0, 1, 1);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(frame_3);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_p0_z = new QLineEdit(frame_3);
        lineEdit_p0_z->setObjectName(QString::fromUtf8("lineEdit_p0_z"));

        gridLayout->addWidget(lineEdit_p0_z, 3, 1, 1, 1);

        lineEdit_p0_y = new QLineEdit(frame_3);
        lineEdit_p0_y->setObjectName(QString::fromUtf8("lineEdit_p0_y"));

        gridLayout->addWidget(lineEdit_p0_y, 2, 1, 1, 1);

        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit_p0_x = new QLineEdit(frame_3);
        lineEdit_p0_x->setObjectName(QString::fromUtf8("lineEdit_p0_x"));

        gridLayout->addWidget(lineEdit_p0_x, 1, 1, 1, 1);

        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 2);


        gridLayout_5->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit_p1_x = new QLineEdit(frame_3);
        lineEdit_p1_x->setObjectName(QString::fromUtf8("lineEdit_p1_x"));

        gridLayout_2->addWidget(lineEdit_p1_x, 1, 1, 1, 1);

        lineEdit_p1_y = new QLineEdit(frame_3);
        lineEdit_p1_y->setObjectName(QString::fromUtf8("lineEdit_p1_y"));

        gridLayout_2->addWidget(lineEdit_p1_y, 2, 1, 1, 1);

        lineEdit_p1_z = new QLineEdit(frame_3);
        lineEdit_p1_z->setObjectName(QString::fromUtf8("lineEdit_p1_z"));

        gridLayout_2->addWidget(lineEdit_p1_z, 3, 1, 1, 1);

        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);

        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 2);


        gridLayout_5->addLayout(gridLayout_2, 0, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);

        label_12 = new QLabel(frame_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 0, 0, 1, 2);

        label_11 = new QLabel(frame_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        lineEdit_p2_x = new QLineEdit(frame_3);
        lineEdit_p2_x->setObjectName(QString::fromUtf8("lineEdit_p2_x"));

        gridLayout_3->addWidget(lineEdit_p2_x, 1, 1, 1, 1);

        lineEdit_p2_z = new QLineEdit(frame_3);
        lineEdit_p2_z->setObjectName(QString::fromUtf8("lineEdit_p2_z"));

        gridLayout_3->addWidget(lineEdit_p2_z, 3, 1, 1, 1);

        lineEdit_p2_y = new QLineEdit(frame_3);
        lineEdit_p2_y->setObjectName(QString::fromUtf8("lineEdit_p2_y"));

        gridLayout_3->addWidget(lineEdit_p2_y, 2, 1, 1, 1);

        label_10 = new QLabel(frame_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 3, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 2, 1, 1);


        gridLayout_10->addLayout(gridLayout_5, 0, 0, 1, 1);


        gridLayout_11->addWidget(frame_3, 1, 0, 1, 2);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMaximumSize(QSize(16777215, 100));

        gridLayout_11->addWidget(textBrowser, 0, 0, 1, 2);

        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy1);
        frame_4->setMinimumSize(QSize(0, 200));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frame_4);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_opencascade = new QGridLayout();
        gridLayout_opencascade->setObjectName(QString::fromUtf8("gridLayout_opencascade"));

        gridLayout_9->addLayout(gridLayout_opencascade, 1, 0, 1, 1);


        gridLayout_11->addWidget(frame_4, 5, 0, 1, 1);

        frame_5 = new QFrame(centralwidget);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setMinimumSize(QSize(0, 100));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_13 = new QGridLayout(frame_5);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_32 = new QLabel(frame_5);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_12->addWidget(label_32, 1, 2, 1, 1);

        pushButton_gforce_line_line = new QPushButton(frame_5);
        pushButton_gforce_line_line->setObjectName(QString::fromUtf8("pushButton_gforce_line_line"));

        gridLayout_12->addWidget(pushButton_gforce_line_line, 0, 2, 1, 1);

        label_30 = new QLabel(frame_5);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_12->addWidget(label_30, 1, 0, 1, 1);

        label_gforce_corner = new QLabel(frame_5);
        label_gforce_corner->setObjectName(QString::fromUtf8("label_gforce_corner"));

        gridLayout_12->addWidget(label_gforce_corner, 1, 1, 1, 1);

        label_31 = new QLabel(frame_5);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_12->addWidget(label_31, 2, 0, 1, 1);

        label_33 = new QLabel(frame_5);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_12->addWidget(label_33, 2, 2, 1, 1);

        label_rps_gforce_corner = new QLabel(frame_5);
        label_rps_gforce_corner->setObjectName(QString::fromUtf8("label_rps_gforce_corner"));

        gridLayout_12->addWidget(label_rps_gforce_corner, 2, 1, 1, 1);

        label_34 = new QLabel(frame_5);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_12->addWidget(label_34, 0, 0, 1, 2);


        gridLayout_13->addLayout(gridLayout_12, 0, 0, 1, 1);


        gridLayout_11->addWidget(frame_5, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 502, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "G-force 3d calculator", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "max gforce", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "velocity", nullptr));
        label_max_velocity_mm_sec->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "[mm/s]", nullptr));
        label_max_velocity_mm_min->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "[mm/min]", nullptr));
        lineEdit_max_gforce->setText(QCoreApplication::translate("MainWindow", "1.5", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "[g]", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Given a max g-force for a arc. \n"
"What is the max velocity to travel?", nullptr));
        pushButton_get_max_velocity->setText(QCoreApplication::translate("MainWindow", "get velocity", nullptr));
        label_g_force->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "[m/s2]", nullptr));
        label_rev_sec->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "[rev/s]", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "rpm", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "[mm/s]", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "gforce", nullptr));
        label_g_force_ms2->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        lineEdit_speed->setText(QCoreApplication::translate("MainWindow", "75000", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "velocity ", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "gforce ", nullptr));
        label_speed_mm_sec->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "[g]", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "[mm/min]", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "velocity ", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Given a velocity and 3 arc circumfence\n"
"points, what is the g-force ?", nullptr));
        pushButton_get_gforce->setText(QCoreApplication::translate("MainWindow", "get g-force", nullptr));
        lineEdit_p0_z->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEdit_p0_y->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "z", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        lineEdit_p0_x->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "StartPoint [mm]", nullptr));
        lineEdit_p1_x->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        lineEdit_p1_y->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        lineEdit_p1_z->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "z", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "WayPoint [mm]", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "EndPoint [mm]", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        lineEdit_p2_x->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        lineEdit_p2_z->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEdit_p2_y->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "z", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans Mono'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\200\242 a salad spinner with a radius of 10 centimeters, which spins at 2 revolutions per second, already generates an acceleration of almost 16 m/s\302\262 or 1.6 g.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">https://rechneronline.de/g-acceleration/centrifuge.php</p></body></html>", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "[g]", nullptr));
        pushButton_gforce_line_line->setText(QCoreApplication::translate("MainWindow", "get g-force line-line", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "gforce \n"
"corner situation :", nullptr));
        label_gforce_corner->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "rps", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "[rev/s]", nullptr));
        label_rps_gforce_corner->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "A line-line direction change, \n"
"resolution 0.1 mm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
