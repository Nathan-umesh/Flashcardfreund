#ifndef FLASHCARD_BUTTON_H
#define FLASHCARD_BUTTON_H

#include "include/path_menu/progress_button.h"
class flashcardButton : public progressButton
{
    Q_OBJECT
public:
    explicit flashcardButton(QWidget *parent = nullptr);
    bool button_action();
signals:
    void new_flashcards();
};

#endif // FLASHCARD_BUTTON_H
