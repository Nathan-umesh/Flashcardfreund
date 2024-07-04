#include "include/path_menu/progress_button.h"

progressButton::progressButton(QWidget *parent)
    : QPushButton(parent)
    , isunlocked(false)
{
    setEnabled(false);
    setStyleSheet(
        "QPushButton{background-color:#bec7c7}"
        );
}

bool progressButton::isgoalsmet()
{
    return true;
}

void progressButton::unlock()
{
    isunlocked = true;
    setEnabled(true);
    setStyleSheet(
        "QPushButton{background-color:#ffbd2e}"
        );
}

bool progressButton::button_action()
{
    return false;
}
