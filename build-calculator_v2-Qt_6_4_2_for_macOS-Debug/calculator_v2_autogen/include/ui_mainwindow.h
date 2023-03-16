/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *lyot_main_panel;
    QPushButton *btn_enter_1;
    QPushButton *btn_x_squared;
    QPushButton *btn_result;
    QPushButton *btn_enter_6;
    QPushButton *btn_1_div_x;
    QPushButton *btn_clear;
    QPushButton *btn_MR;
    QPushButton *btn_M;
    QPushButton *btn_change_number_sign;
    QPushButton *btn_minus;
    QPushButton *btn_enter_0;
    QPushButton *btn_enter_delimetr;
    QPushButton *btn_multiplication;
    QPushButton *btn_sinx;
    QPushButton *btn_enter_9;
    QPushButton *btn_backspace;
    QPushButton *btn_division;
    QPushButton *btn_enter_3;
    QPushButton *btn_MC;
    QPushButton *btn_enter_4;
    QPushButton *btn_enter_5;
    QPushButton *btn_ctgx;
    QPushButton *btn_enter_2;
    QPushButton *btn_sqrt;
    QPushButton *btn_M_minus;
    QPushButton *btn_M_plus;
    QPushButton *btn_sum;
    QPushButton *btn_cosx;
    QPushButton *btn_enter_8;
    QPushButton *btn_tgx;
    QPushButton *btn_enter_7;
    QLabel *lbl_display;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(450, 650);
        MainWindow->setMinimumSize(QSize(450, 650));
        MainWindow->setMaximumSize(QSize(450, 650));
        MainWindow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"Noto Sans\";"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(520, 700));
        centralwidget->setMaximumSize(QSize(520, 700));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: #121212;"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 130, 451, 521));
        lyot_main_panel = new QGridLayout(gridLayoutWidget);
        lyot_main_panel->setSpacing(0);
        lyot_main_panel->setObjectName("lyot_main_panel");
        lyot_main_panel->setSizeConstraint(QLayout::SetNoConstraint);
        lyot_main_panel->setContentsMargins(0, 0, 0, 0);
        btn_enter_1 = new QPushButton(gridLayoutWidget);
        btn_enter_1->setObjectName("btn_enter_1");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_enter_1->sizePolicy().hasHeightForWidth());
        btn_enter_1->setSizePolicy(sizePolicy1);
        btn_enter_1->setMinimumSize(QSize(0, 0));
        btn_enter_1->setMaximumSize(QSize(300, 300));
        btn_enter_1->setCursor(QCursor(Qt::OpenHandCursor));
        btn_enter_1->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #666;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #888;\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: rgb(21, 23, 25);\n"
"}"));

        lyot_main_panel->addWidget(btn_enter_1, 6, 0, 1, 1);

        btn_x_squared = new QPushButton(gridLayoutWidget);
        btn_x_squared->setObjectName("btn_x_squared");
        sizePolicy1.setHeightForWidth(btn_x_squared->sizePolicy().hasHeightForWidth());
        btn_x_squared->setSizePolicy(sizePolicy1);
        btn_x_squared->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}"));

        lyot_main_panel->addWidget(btn_x_squared, 3, 1, 1, 1);

        btn_result = new QPushButton(gridLayoutWidget);
        btn_result->setObjectName("btn_result");
        sizePolicy1.setHeightForWidth(btn_result->sizePolicy().hasHeightForWidth());
        btn_result->setSizePolicy(sizePolicy1);
        btn_result->setMinimumSize(QSize(0, 0));
        btn_result->setMaximumSize(QSize(300, 300));
        btn_result->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}"));

        lyot_main_panel->addWidget(btn_result, 7, 3, 1, 2);

        btn_enter_6 = new QPushButton(gridLayoutWidget);
        btn_enter_6->setObjectName("btn_enter_6");
        sizePolicy1.setHeightForWidth(btn_enter_6->sizePolicy().hasHeightForWidth());
        btn_enter_6->setSizePolicy(sizePolicy1);
        btn_enter_6->setMinimumSize(QSize(0, 0));
        btn_enter_6->setMaximumSize(QSize(300, 300));
        btn_enter_6->setCursor(QCursor(Qt::OpenHandCursor));
        btn_enter_6->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #666;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #888;\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: rgb(21, 23, 25);\n"
"}"));

        lyot_main_panel->addWidget(btn_enter_6, 5, 2, 1, 1);

        btn_1_div_x = new QPushButton(gridLayoutWidget);
        btn_1_div_x->setObjectName("btn_1_div_x");
        sizePolicy1.setHeightForWidth(btn_1_div_x->sizePolicy().hasHeightForWidth());
        btn_1_div_x->setSizePolicy(sizePolicy1);
        btn_1_div_x->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}"));

        lyot_main_panel->addWidget(btn_1_div_x, 3, 2, 1, 1);

        btn_clear = new QPushButton(gridLayoutWidget);
        btn_clear->setObjectName("btn_clear");
        sizePolicy1.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy1);
        btn_clear->setMinimumSize(QSize(0, 0));
        btn_clear->setMaximumSize(QSize(300, 300));
        btn_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 71, 34);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: #320a18;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #45161c;\n"
"}"));

        lyot_main_panel->addWidget(btn_clear, 3, 3, 1, 2);

        btn_MR = new QPushButton(gridLayoutWidget);
        btn_MR->setObjectName("btn_MR");
        sizePolicy1.setHeightForWidth(btn_MR->sizePolicy().hasHeightForWidth());
        btn_MR->setSizePolicy(sizePolicy1);
        btn_MR->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}"));

        lyot_main_panel->addWidget(btn_MR, 0, 4, 1, 1);

        btn_M = new QPushButton(gridLayoutWidget);
        btn_M->setObjectName("btn_M");
        sizePolicy1.setHeightForWidth(btn_M->sizePolicy().hasHeightForWidth());
        btn_M->setSizePolicy(sizePolicy1);
        btn_M->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}"));

        lyot_main_panel->addWidget(btn_M, 0, 0, 1, 1);

        btn_change_number_sign = new QPushButton(gridLayoutWidget);
        btn_change_number_sign->setObjectName("btn_change_number_sign");
        sizePolicy1.setHeightForWidth(btn_change_number_sign->sizePolicy().hasHeightForWidth());
        btn_change_number_sign->setSizePolicy(sizePolicy1);
        btn_change_number_sign->setMinimumSize(QSize(0, 0));
        btn_change_number_sign->setMaximumSize(QSize(300, 300));
        btn_change_number_sign->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}\n"
"\n"
"\n"
""));

        lyot_main_panel->addWidget(btn_change_number_sign, 4, 3, 1, 1);

        btn_minus = new QPushButton(gridLayoutWidget);
        btn_minus->setObjectName("btn_minus");
        sizePolicy1.setHeightForWidth(btn_minus->sizePolicy().hasHeightForWidth());
        btn_minus->setSizePolicy(sizePolicy1);
        btn_minus->setMinimumSize(QSize(0, 0));
        btn_minus->setMaximumSize(QSize(300, 300));
        btn_minus->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}\n"
"\n"
""));

        lyot_main_panel->addWidget(btn_minus, 5, 3, 1, 1);

        btn_enter_0 = new QPushButton(gridLayoutWidget);
        btn_enter_0->setObjectName("btn_enter_0");
        sizePolicy1.setHeightForWidth(btn_enter_0->sizePolicy().hasHeightForWidth());
        btn_enter_0->setSizePolicy(sizePolicy1);
        btn_enter_0->setMinimumSize(QSize(0, 0));
        btn_enter_0->setMaximumSize(QSize(300, 300));
        btn_enter_0->setCursor(QCursor(Qt::OpenHandCursor));
        btn_enter_0->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #666;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #888;\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: rgb(21, 23, 25);\n"
"}"));

        lyot_main_panel->addWidget(btn_enter_0, 7, 0, 1, 2);

        btn_enter_delimetr = new QPushButton(gridLayoutWidget);
        btn_enter_delimetr->setObjectName("btn_enter_delimetr");
        sizePolicy1.setHeightForWidth(btn_enter_delimetr->sizePolicy().hasHeightForWidth());
        btn_enter_delimetr->setSizePolicy(sizePolicy1);
        btn_enter_delimetr->setMinimumSize(QSize(0, 0));
        btn_enter_delimetr->setMaximumSize(QSize(300, 300));
        btn_enter_delimetr->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #666;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #888;\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: rgb(21, 23, 25);\n"
"}"));

        lyot_main_panel->addWidget(btn_enter_delimetr, 7, 2, 1, 1);

        btn_multiplication = new QPushButton(gridLayoutWidget);
        btn_multiplication->setObjectName("btn_multiplication");
        sizePolicy1.setHeightForWidth(btn_multiplication->sizePolicy().hasHeightForWidth());
        btn_multiplication->setSizePolicy(sizePolicy1);
        btn_multiplication->setMinimumSize(QSize(0, 0));
        btn_multiplication->setMaximumSize(QSize(300, 300));
        btn_multiplication->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}"));

        lyot_main_panel->addWidget(btn_multiplication, 4, 4, 1, 1);

        btn_sinx = new QPushButton(gridLayoutWidget);
        btn_sinx->setObjectName("btn_sinx");
        sizePolicy1.setHeightForWidth(btn_sinx->sizePolicy().hasHeightForWidth());
        btn_sinx->setSizePolicy(sizePolicy1);
        btn_sinx->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}"));

        lyot_main_panel->addWidget(btn_sinx, 1, 0, 1, 1);

        btn_enter_9 = new QPushButton(gridLayoutWidget);
        btn_enter_9->setObjectName("btn_enter_9");
        sizePolicy1.setHeightForWidth(btn_enter_9->sizePolicy().hasHeightForWidth());
        btn_enter_9->setSizePolicy(sizePolicy1);
        btn_enter_9->setMinimumSize(QSize(0, 0));
        btn_enter_9->setMaximumSize(QSize(300, 300));
        btn_enter_9->setCursor(QCursor(Qt::OpenHandCursor));
        btn_enter_9->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #666;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #888;\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: rgb(21, 23, 25);\n"
"}"));

        lyot_main_panel->addWidget(btn_enter_9, 4, 2, 1, 1);

        btn_backspace = new QPushButton(gridLayoutWidget);
        btn_backspace->setObjectName("btn_backspace");
        btn_backspace->setEnabled(true);
        sizePolicy1.setHeightForWidth(btn_backspace->sizePolicy().hasHeightForWidth());
        btn_backspace->setSizePolicy(sizePolicy1);
        btn_backspace->setMinimumSize(QSize(0, 0));
        btn_backspace->setMaximumSize(QSize(300, 300));
        btn_backspace->setBaseSize(QSize(0, 0));
        btn_backspace->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #320a18;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #45161c;\n"
"}"));

        lyot_main_panel->addWidget(btn_backspace, 1, 4, 1, 1);

        btn_division = new QPushButton(gridLayoutWidget);
        btn_division->setObjectName("btn_division");
        sizePolicy1.setHeightForWidth(btn_division->sizePolicy().hasHeightForWidth());
        btn_division->setSizePolicy(sizePolicy1);
        btn_division->setMinimumSize(QSize(0, 0));
        btn_division->setMaximumSize(QSize(300, 300));
        btn_division->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}"));

        lyot_main_panel->addWidget(btn_division, 5, 4, 1, 1);

        btn_enter_3 = new QPushButton(gridLayoutWidget);
        btn_enter_3->setObjectName("btn_enter_3");
        sizePolicy1.setHeightForWidth(btn_enter_3->sizePolicy().hasHeightForWidth());
        btn_enter_3->setSizePolicy(sizePolicy1);
        btn_enter_3->setMinimumSize(QSize(0, 0));
        btn_enter_3->setMaximumSize(QSize(300, 300));
        btn_enter_3->setCursor(QCursor(Qt::OpenHandCursor));
        btn_enter_3->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #666;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #888;\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: rgb(21, 23, 25);\n"
"}"));

        lyot_main_panel->addWidget(btn_enter_3, 6, 2, 1, 1);

        btn_MC = new QPushButton(gridLayoutWidget);
        btn_MC->setObjectName("btn_MC");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn_MC->sizePolicy().hasHeightForWidth());
        btn_MC->setSizePolicy(sizePolicy2);
        btn_MC->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}"));

        lyot_main_panel->addWidget(btn_MC, 0, 3, 1, 1);

        btn_enter_4 = new QPushButton(gridLayoutWidget);
        btn_enter_4->setObjectName("btn_enter_4");
        sizePolicy1.setHeightForWidth(btn_enter_4->sizePolicy().hasHeightForWidth());
        btn_enter_4->setSizePolicy(sizePolicy1);
        btn_enter_4->setMinimumSize(QSize(0, 0));
        btn_enter_4->setMaximumSize(QSize(300, 300));
        btn_enter_4->setCursor(QCursor(Qt::OpenHandCursor));
        btn_enter_4->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #666;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #888;\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: rgb(21, 23, 25);\n"
"}"));

        lyot_main_panel->addWidget(btn_enter_4, 5, 0, 1, 1);

        btn_enter_5 = new QPushButton(gridLayoutWidget);
        btn_enter_5->setObjectName("btn_enter_5");
        sizePolicy1.setHeightForWidth(btn_enter_5->sizePolicy().hasHeightForWidth());
        btn_enter_5->setSizePolicy(sizePolicy1);
        btn_enter_5->setMinimumSize(QSize(0, 0));
        btn_enter_5->setMaximumSize(QSize(300, 300));
        btn_enter_5->setCursor(QCursor(Qt::OpenHandCursor));
        btn_enter_5->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #666;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #888;\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: rgb(21, 23, 25);\n"
"}"));

        lyot_main_panel->addWidget(btn_enter_5, 5, 1, 1, 1);

        btn_ctgx = new QPushButton(gridLayoutWidget);
        btn_ctgx->setObjectName("btn_ctgx");
        sizePolicy1.setHeightForWidth(btn_ctgx->sizePolicy().hasHeightForWidth());
        btn_ctgx->setSizePolicy(sizePolicy1);
        btn_ctgx->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}"));

        lyot_main_panel->addWidget(btn_ctgx, 1, 3, 1, 1);

        btn_enter_2 = new QPushButton(gridLayoutWidget);
        btn_enter_2->setObjectName("btn_enter_2");
        sizePolicy1.setHeightForWidth(btn_enter_2->sizePolicy().hasHeightForWidth());
        btn_enter_2->setSizePolicy(sizePolicy1);
        btn_enter_2->setMinimumSize(QSize(0, 0));
        btn_enter_2->setMaximumSize(QSize(300, 300));
        btn_enter_2->setCursor(QCursor(Qt::OpenHandCursor));
        btn_enter_2->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #666;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #888;\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: rgb(21, 23, 25);\n"
"}"));

        lyot_main_panel->addWidget(btn_enter_2, 6, 1, 1, 1);

        btn_sqrt = new QPushButton(gridLayoutWidget);
        btn_sqrt->setObjectName("btn_sqrt");
        sizePolicy1.setHeightForWidth(btn_sqrt->sizePolicy().hasHeightForWidth());
        btn_sqrt->setSizePolicy(sizePolicy1);
        btn_sqrt->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}"));

        lyot_main_panel->addWidget(btn_sqrt, 3, 0, 1, 1);

        btn_M_minus = new QPushButton(gridLayoutWidget);
        btn_M_minus->setObjectName("btn_M_minus");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btn_M_minus->sizePolicy().hasHeightForWidth());
        btn_M_minus->setSizePolicy(sizePolicy3);
        btn_M_minus->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}"));

        lyot_main_panel->addWidget(btn_M_minus, 0, 2, 1, 1);

        btn_M_plus = new QPushButton(gridLayoutWidget);
        btn_M_plus->setObjectName("btn_M_plus");
        sizePolicy3.setHeightForWidth(btn_M_plus->sizePolicy().hasHeightForWidth());
        btn_M_plus->setSizePolicy(sizePolicy3);
        btn_M_plus->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}"));

        lyot_main_panel->addWidget(btn_M_plus, 0, 1, 1, 1);

        btn_sum = new QPushButton(gridLayoutWidget);
        btn_sum->setObjectName("btn_sum");
        sizePolicy1.setHeightForWidth(btn_sum->sizePolicy().hasHeightForWidth());
        btn_sum->setSizePolicy(sizePolicy1);
        btn_sum->setMinimumSize(QSize(0, 0));
        btn_sum->setMaximumSize(QSize(300, 300));
        btn_sum->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}"));

        lyot_main_panel->addWidget(btn_sum, 6, 3, 1, 2);

        btn_cosx = new QPushButton(gridLayoutWidget);
        btn_cosx->setObjectName("btn_cosx");
        sizePolicy1.setHeightForWidth(btn_cosx->sizePolicy().hasHeightForWidth());
        btn_cosx->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Sans")});
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        btn_cosx->setFont(font);
        btn_cosx->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}"));

        lyot_main_panel->addWidget(btn_cosx, 1, 1, 1, 1);

        btn_enter_8 = new QPushButton(gridLayoutWidget);
        btn_enter_8->setObjectName("btn_enter_8");
        sizePolicy1.setHeightForWidth(btn_enter_8->sizePolicy().hasHeightForWidth());
        btn_enter_8->setSizePolicy(sizePolicy1);
        btn_enter_8->setMinimumSize(QSize(0, 0));
        btn_enter_8->setMaximumSize(QSize(300, 300));
        btn_enter_8->setCursor(QCursor(Qt::OpenHandCursor));
        btn_enter_8->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #666;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #888;\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: rgb(21, 23, 25);\n"
"}"));

        lyot_main_panel->addWidget(btn_enter_8, 4, 1, 1, 1);

        btn_tgx = new QPushButton(gridLayoutWidget);
        btn_tgx->setObjectName("btn_tgx");
        sizePolicy1.setHeightForWidth(btn_tgx->sizePolicy().hasHeightForWidth());
        btn_tgx->setSizePolicy(sizePolicy1);
        btn_tgx->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #002137;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #0e294b;\n"
"}"));

        lyot_main_panel->addWidget(btn_tgx, 1, 2, 1, 1);

        btn_enter_7 = new QPushButton(gridLayoutWidget);
        btn_enter_7->setObjectName("btn_enter_7");
        sizePolicy1.setHeightForWidth(btn_enter_7->sizePolicy().hasHeightForWidth());
        btn_enter_7->setSizePolicy(sizePolicy1);
        btn_enter_7->setMinimumSize(QSize(0, 0));
        btn_enter_7->setMaximumSize(QSize(300, 300));
        btn_enter_7->setCursor(QCursor(Qt::OpenHandCursor));
        btn_enter_7->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"        background-color: #666;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #888;\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: rgb(21, 23, 25);\n"
"}"));

        lyot_main_panel->addWidget(btn_enter_7, 4, 0, 1, 1);

        lbl_display = new QLabel(centralwidget);
        lbl_display->setObjectName("lbl_display");
        lbl_display->setGeometry(QRect(0, 0, 450, 141));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lbl_display->sizePolicy().hasHeightForWidth());
        lbl_display->setSizePolicy(sizePolicy4);
        lbl_display->setMinimumSize(QSize(450, 0));
        lbl_display->setMaximumSize(QSize(450, 500));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(36);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setKerning(true);
        lbl_display->setFont(font1);
        lbl_display->setStyleSheet(QString::fromUtf8("background-color: #121212;\n"
"font: 36pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        lbl_display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        btn_enter_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_x_squared->setText(QCoreApplication::translate("MainWindow", "x^2", nullptr));
        btn_result->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn_enter_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_1_div_x->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btn_MR->setText(QCoreApplication::translate("MainWindow", "MR", nullptr));
        btn_M->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        btn_change_number_sign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        btn_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_enter_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_enter_delimetr->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn_multiplication->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn_sinx->setText(QCoreApplication::translate("MainWindow", "sinx", nullptr));
        btn_enter_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_backspace->setText(QCoreApplication::translate("MainWindow", "Del", nullptr));
        btn_division->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn_enter_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn_MC->setText(QCoreApplication::translate("MainWindow", "MC", nullptr));
        btn_enter_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn_enter_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_ctgx->setText(QCoreApplication::translate("MainWindow", "ctgx", nullptr));
        btn_enter_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn_sqrt->setText(QCoreApplication::translate("MainWindow", "Sqrt", nullptr));
        btn_M_minus->setText(QCoreApplication::translate("MainWindow", "M-", nullptr));
        btn_M_plus->setText(QCoreApplication::translate("MainWindow", "M+", nullptr));
        btn_sum->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_cosx->setText(QCoreApplication::translate("MainWindow", "cosx", nullptr));
        btn_enter_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_tgx->setText(QCoreApplication::translate("MainWindow", "tgx", nullptr));
        btn_enter_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        lbl_display->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
