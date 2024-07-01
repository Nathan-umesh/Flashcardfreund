#ifndef FLASHCARDS_H
#define FLASHCARDS_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>

namespace Ui {
class Flashcards;
}

class Flashcards : public QWidget
{
    Q_OBJECT

public:
    explicit Flashcards(QWidget *parent = nullptr);
    ~Flashcards();

private:
    Ui::Flashcards *ui;
};

#endif // FLASHCARDS_H
