#ifndef STYLESHEET_H
#define STYLESHEET_H

#include <QMainWindow>
#include <QPushButton>

const QString numbers_style = "QPushButton:hover {background-color: #666;}QPushButton:pressed {background-color: #888;}";
const QString blocked_style = "QPushButton {background-color: #666;}";

void set_stylesheet (QPushButton *button, bool status);

#endif // STYLESHEET_H
