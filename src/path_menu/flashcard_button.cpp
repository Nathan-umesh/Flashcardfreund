#include "include/path_menu/flashcard_button.h"

flashcardButton::flashcardButton(QWidget *parent)
    : progressButton{parent}
{}

bool flashcardButton::button_action()
{
    emit new_flashcards();
    setStyleSheet(
        "QPushButton{background-color:#c78f17}"
        );
    setEnabled(false);
    setText("Flashcard pack opened");
    return true;
}
