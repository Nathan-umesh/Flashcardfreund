#ifndef FLASHCARD_PACK_H
#define FLASHCARD_PACK_H

#include "progress_button.h"

class flashcardPack : public ProgressButton
{
    Q_OBJECT
public:
    explicit flashcardPack(QWidget *parent = nullptr);
    bool button_action();
signals:
    void new_flashcards();
};

#endif // FLASHCARD_PACK_H
