#include "progress_button.h"

Progress_button::Progress_button(QWidget *parent)
    : QPushButton(parent)
{
    setEnabled(false);
    setStyleSheet(
        "QPushButton:disabled{"
        "background-color:#bec7c7}"
        );
}

bool Progress_button::isgoalsmet()
{
    return true;
}

void Progress_button::unlock()
{
    setEnabled(true);
}

bool Progress_button::button_action()
{
    return false;
}
