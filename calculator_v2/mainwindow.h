#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define ERROR 98765e-99

#define max_length 15

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_sign_buttons_clicked();
    void on_trig_buttons_clicked();
    void on_optional_buttons_clicked();

    void on_btn_enter_delimetr_clicked();
    void on_btn_clear_clicked();
    void on_btn_result_clicked();
    void on_btn_backspace_clicked();
    void on_btn_change_number_sign_clicked();

    void on_m_buttons_clicked();
    void on_btn_M_clicked();
    void on_btn_MC_clicked();
    void on_btn_MR_clicked();

    void enable_sign_buttons(bool status);
    void enable_trig_buttons(bool status);
    void enable_number_buttons(bool status);
    void enable_optional_buttons(bool status);
    void enter_numbers();

    QString result (QString num_first, QString num_second, QString operation);

private:
    Ui::MainWindow *ui;
    QString num_first;
    QString memory = "0";
    QString operation;

};
#endif // MAINWINDOW_H
