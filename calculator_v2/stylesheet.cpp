#include "stylesheet.h"

void set_stylesheet (QPushButton *button, bool status)
{
    if (status == false)
        button->setStyleSheet(blocked_style);
    else
        button->setStyleSheet(numbers_style);
}
