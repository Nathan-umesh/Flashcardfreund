#ifndef FLASHCARDS_PAGE_H
#define FLASHCARDS_PAGE_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>

namespace Ui {
class flashcardsPage;
}

class flashcardsPage : public QWidget
{
    Q_OBJECT

public:
    explicit flashcardsPage(QWidget *parent = nullptr);
    ~flashcardsPage();

private:
    Ui::flashcardsPage *ui;
};

#endif // FLASHCARDS_PAGE_H
