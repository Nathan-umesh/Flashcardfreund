#include "flashcard_pack.h"

flashcardPack::flashcardPack(QWidget *parent)
    : ProgressButton{parent}
{}

bool flashcardPack::button_action()
{
    emit new_flashcards();
    setStyleSheet(
        "QPushButton{background-color:#c78f17}"
        );
    setEnabled(false);
    setText("Flashcard pack opened");
    return true;
}
