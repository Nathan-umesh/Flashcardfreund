#include "include/progress_button.h"

ProgressButton::ProgressButton(QWidget *parent)
    : QPushButton(parent)
    , isunlocked(false)
{
    setEnabled(false);
    setStyleSheet(
        "QPushButton{background-color:#bec7c7}"
        );
}

bool ProgressButton::isgoalsmet()
{
    return true;
}

void ProgressButton::unlock()
{
    isunlocked = true;
    setEnabled(true);
    setStyleSheet(
        "QPushButton{background-color:#ffbd2e}"
        );
}

bool ProgressButton::button_action()
{
    return false;
}
