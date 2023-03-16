#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "operations.h"
#include "stylesheet.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btn_enter_0, SIGNAL(clicked()), this, SLOT(enter_numbers()));
    connect(ui->btn_enter_1, SIGNAL(clicked()), this, SLOT(enter_numbers()));
    connect(ui->btn_enter_2, SIGNAL(clicked()), this, SLOT(enter_numbers()));
    connect(ui->btn_enter_3, SIGNAL(clicked()), this, SLOT(enter_numbers()));
    connect(ui->btn_enter_4, SIGNAL(clicked()), this, SLOT(enter_numbers()));
    connect(ui->btn_enter_5, SIGNAL(clicked()), this, SLOT(enter_numbers()));
    connect(ui->btn_enter_6, SIGNAL(clicked()), this, SLOT(enter_numbers()));
    connect(ui->btn_enter_7, SIGNAL(clicked()), this, SLOT(enter_numbers()));
    connect(ui->btn_enter_8, SIGNAL(clicked()), this, SLOT(enter_numbers()));
    connect(ui->btn_enter_9, SIGNAL(clicked()), this, SLOT(enter_numbers()));
    connect(ui->btn_division, SIGNAL(clicked()), this, SLOT(on_sign_buttons_clicked()));
    connect(ui->btn_minus, SIGNAL(clicked()), this, SLOT(on_sign_buttons_clicked()));
    connect(ui->btn_sum, SIGNAL(clicked()), this, SLOT(on_sign_buttons_clicked()));
    connect(ui->btn_multiplication, SIGNAL(clicked()), this, SLOT(on_sign_buttons_clicked()));
    connect(ui->btn_sinx, SIGNAL(clicked()), this, SLOT(on_trig_buttons_clicked()));
    connect(ui->btn_cosx, SIGNAL(clicked()), this, SLOT(on_trig_buttons_clicked()));
    connect(ui->btn_tgx, SIGNAL(clicked()), this, SLOT(on_trig_buttons_clicked()));
    connect(ui->btn_ctgx, SIGNAL(clicked()), this, SLOT(on_trig_buttons_clicked()));
    connect(ui->btn_1_div_x, SIGNAL(clicked()), this, SLOT(on_optional_buttons_clicked()));
    connect(ui->btn_x_squared, SIGNAL(clicked()), this, SLOT(on_optional_buttons_clicked()));
    connect(ui->btn_sqrt, SIGNAL(clicked()), this, SLOT(on_optional_buttons_clicked()));
    connect(ui->btn_M_minus, SIGNAL(clicked()), this, SLOT(on_m_buttons_clicked()));
    connect(ui->btn_M_plus, SIGNAL(clicked()), this, SLOT(on_m_buttons_clicked()));

    /*connect(ui->btn_MR, SIGNAL(clicked()), this, SLOT(on_btn_MR_clicked()));
      connect(ui->btn_MC, SIGNAL(clicked()), this, SLOT(on_btn_MC_clicked()));
      connect(ui->btn_M, SIGNAL(clicked()), this, SLOT(on_btn_M_clicked()));*/

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::enable_sign_buttons(bool status)
{
    ui->btn_sum->setEnabled(status);
    ui->btn_minus->setEnabled(status);
    ui->btn_division->setEnabled(status);
    ui->btn_multiplication->setEnabled(status);
    set_stylesheet(ui->btn_sum, status);
    set_stylesheet(ui->btn_minus, status);
    set_stylesheet(ui->btn_division, status);
    set_stylesheet(ui->btn_multiplication, status);
}

void MainWindow::enable_trig_buttons(bool status)
{
    ui->btn_sinx->setEnabled(status);
    ui->btn_cosx->setEnabled(status);
    ui->btn_tgx->setEnabled(status);
    ui->btn_ctgx->setEnabled(status);
    set_stylesheet(ui->btn_sinx, status);
    set_stylesheet(ui->btn_cosx, status);
    set_stylesheet(ui->btn_tgx, status);
    set_stylesheet(ui->btn_ctgx, status);
}

void MainWindow::enable_optional_buttons(bool status)
{
    ui->btn_1_div_x->setEnabled(status);
    ui->btn_x_squared->setEnabled(status);
    ui->btn_sqrt->setEnabled(status);
    set_stylesheet(ui->btn_1_div_x, status);
    set_stylesheet(ui->btn_x_squared, status);
    set_stylesheet(ui->btn_sqrt, status);
}

void MainWindow::enable_number_buttons(bool status)
{
    ui->btn_enter_0->setEnabled(status);
    ui->btn_enter_1->setEnabled(status);
    ui->btn_enter_2->setEnabled(status);
    ui->btn_enter_3->setEnabled(status);
    ui->btn_enter_4->setEnabled(status);
    ui->btn_enter_5->setEnabled(status);
    ui->btn_enter_6->setEnabled(status);
    ui->btn_enter_7->setEnabled(status);
    ui->btn_enter_8->setEnabled(status);
    ui->btn_enter_9->setEnabled(status);
    set_stylesheet(ui->btn_enter_0, status);
    set_stylesheet(ui->btn_enter_1, status);
    set_stylesheet(ui->btn_enter_2, status);
    set_stylesheet(ui->btn_enter_3, status);
    set_stylesheet(ui->btn_enter_4, status);
    set_stylesheet(ui->btn_enter_5, status);
    set_stylesheet(ui->btn_enter_6, status);
    set_stylesheet(ui->btn_enter_7, status);
    set_stylesheet(ui->btn_enter_8, status);
    set_stylesheet(ui->btn_enter_9, status);
}

void MainWindow::enter_numbers()
{
    QPushButton *pressed_button = (QPushButton *)sender();
    QString full_number;
    QString label = ui->lbl_display->text();
    enable_sign_buttons(true);
    enable_trig_buttons(true);
    enable_optional_buttons(true);
    ui->btn_backspace->setEnabled(true);
    set_stylesheet(ui->btn_backspace, true);
    if ((label.length()) < max_length)
    {
        if (label == '0')
            full_number = pressed_button->text();
        else
        {
            full_number = label + pressed_button->text();
            if (!label.contains("."))
            {
                ui->btn_enter_delimetr->setEnabled(true);
                set_stylesheet(ui->btn_enter_delimetr, true);
            }
        }
        ui->lbl_display->setText(full_number);
    }
    else
        QMessageBox::critical(this, "Error message", "This number is too big.");
}

void MainWindow::on_btn_enter_delimetr_clicked()
{
    if (ui->lbl_display->text().length() == 0)
        ui->lbl_display->setText("0.");
    else if (!(ui->lbl_display->text().contains('.')) && ui->lbl_display->text() != '-')
        ui->lbl_display->setText(ui->lbl_display->text() + '.');
    ui->btn_enter_delimetr->setEnabled(false);
    set_stylesheet(ui->btn_enter_delimetr, false);
    enable_sign_buttons(false);
    enable_trig_buttons(false);
    enable_optional_buttons(false);
}

void MainWindow::on_btn_result_clicked()
{
    QString num_second = ui->lbl_display->text();
    if (operation == "+" || operation == "-" || operation == "*" || operation == "/")
        num_first = result(num_first, num_second, operation);
    ui->lbl_display->setText(num_first);
    if ((ui->lbl_display->text().contains("e")))
    {
        ui->btn_backspace->setEnabled(false);
        set_stylesheet(ui->btn_backspace, false);
        ui->btn_enter_delimetr->setEnabled(false);
        set_stylesheet(ui->btn_enter_delimetr, false);
        enable_number_buttons(false);
    } else if (ui->lbl_display->text().contains("."))
    {
        ui->btn_enter_delimetr->setEnabled(false);
        set_stylesheet(ui->btn_enter_delimetr, false);
    } else
    {
        ui->btn_enter_delimetr->setEnabled(true);
        set_stylesheet(ui->btn_enter_delimetr, true);
    }
    num_first = "";
}

void MainWindow::on_sign_buttons_clicked()
{
    QPushButton *pressed_button = (QPushButton *)sender();
    enable_sign_buttons(false);
    enable_optional_buttons(false);
    enable_trig_buttons(false);
    enable_number_buttons(true);
    ui->btn_enter_delimetr->setEnabled(true);
    set_stylesheet(ui->btn_enter_delimetr, true);
    QString num_second = ui->lbl_display->text();
    if (num_first!="")
        num_first = result(num_first, num_second, operation);
    else
        num_first = num_second;
    operation = pressed_button->text();
    ui->lbl_display->setText("");
}

void MainWindow::on_trig_buttons_clicked()
{
    QPushButton *pressed_button = (QPushButton *)sender();
    QString num_second = ui->lbl_display->text();
    QString trig_operation = pressed_button->text();
    if (num_first == "")
    {
        num_first = result(num_first, num_second, trig_operation);
        ui->lbl_display->setText("");
        on_btn_result_clicked();
    }
    else
    {
        num_second = result(num_first, num_second, trig_operation);
        num_first = result(num_first, num_second, operation);
        ui->lbl_display->setText("");
    }
}

void MainWindow::on_optional_buttons_clicked()
{
    QPushButton *pressed_button = (QPushButton *)sender();
    QString num_second = ui->lbl_display->text();
    QString optional_operation = pressed_button->text();
    if (num_first == "")
    {
        num_first = result(num_first, num_second, optional_operation);
        ui->lbl_display->setText("");
        on_btn_result_clicked();
    }
    else
    {
        num_second = result(num_first, num_second, optional_operation);
        num_first = result(num_first, num_second, operation);
        ui->lbl_display->setText("");
    }

}

QString MainWindow::result(QString num_first, QString num_second, QString operation)
{
    struct operations operations;
    QByteArray oper = operation.toLatin1();
    operations.operation = oper.data();
    operations.num_first = num_first.toDouble();
    operations.num_second = num_second.toDouble();
    double result = entry_point(operations);
    if (result == ERROR)
        QMessageBox::critical(this, "Error message", "Cannot calculate this function.");
    else
        num_first = QString::number(result);
    return num_first;
}

void MainWindow::on_btn_clear_clicked()
{
    ui->lbl_display->setText("");
    num_first = "";
    operation = "";
    ui->btn_enter_delimetr->setEnabled(true);
    set_stylesheet(ui->btn_enter_delimetr, true);
    ui->btn_backspace->setEnabled(true);
    set_stylesheet(ui->btn_backspace, true);
    enable_sign_buttons(false);
    enable_trig_buttons(false);
    enable_optional_buttons(false);
    enable_number_buttons(true);
}

void MainWindow::on_btn_backspace_clicked()
{
    QString text = ui->lbl_display->text();
    text.chop(1);
    if (text.isEmpty())
    {
        enable_sign_buttons(false);
        enable_trig_buttons(false);
        enable_optional_buttons(false);
    }
    ui->lbl_display->setText(text);
    if (!ui->lbl_display->text().contains("."))
    {
        ui->btn_enter_delimetr->setEnabled(true);
        set_stylesheet(ui->btn_enter_delimetr, true);
        enable_optional_buttons(true);
        enable_sign_buttons(true);
        enable_trig_buttons(true);
    }
}

void MainWindow::on_btn_change_number_sign_clicked()
{
    QString number;
    if (ui->lbl_display->text().contains("-"))
        number = ui->lbl_display->text().remove(0, 1);
    else if (ui->lbl_display->text() == "0")
        number = "-";
    else
        number = "-" + ui->lbl_display->text();
    ui->lbl_display->setText(number);
}

void MainWindow::on_m_buttons_clicked()
{
    QPushButton *pressed_button = (QPushButton *)sender();
    QString memory_operation = pressed_button->text();
    QString num_second = ui->lbl_display->text();
    if (memory_operation == "M+")
        memory_operation = "+";
    else if (memory_operation == "M-")
        memory_operation = "-";
    memory = result(memory, num_second, memory_operation);
}

void MainWindow::on_btn_M_clicked()
{
    memory = ui->lbl_display->text();
}

void MainWindow::on_btn_MC_clicked()
{
    memory = "0";
}

void MainWindow::on_btn_MR_clicked()
{
    ui->lbl_display->setText(memory);
    if ((ui->lbl_display->text().contains("e")))
    {
        ui->btn_backspace->setEnabled(false);
        set_stylesheet(ui->btn_backspace, false);
        ui->btn_enter_delimetr->setEnabled(false);
        set_stylesheet(ui->btn_enter_delimetr, false);
        enable_number_buttons(false);
    } else if (ui->lbl_display->text().contains("."))
    {
        ui->btn_enter_delimetr->setEnabled(false);
        set_stylesheet(ui->btn_enter_delimetr, false);
    } else
    {
        ui->btn_enter_delimetr->setEnabled(true);
        set_stylesheet(ui->btn_enter_delimetr, true);
    }
}

