#ifndef FLASHCARD_PACK_H
#define FLASHCARD_PACK_H

#include "progress_button.h"

class flashcard_pack : public Progress_button
{
    Q_OBJECT
public:
    explicit flashcard_pack(QWidget *parent = nullptr);
    bool button_action();
signals:
    void new_flashcards();
};

#endif // FLASHCARD_PACK_H
