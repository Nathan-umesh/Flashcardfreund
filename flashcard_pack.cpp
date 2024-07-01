#include "flashcard_pack.h"

flashcard_pack::flashcard_pack(QWidget *parent)
    : Progress_button{parent}
{}

bool flashcard_pack::button_action()
{
    emit new_flashcards();
    return true;
}
