#include "flashcards.h"
#include "ui_flashcards.h"

Flashcards::Flashcards(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Flashcards)
{
    ui->setupUi(this);
}

Flashcards::~Flashcards()
{
    delete ui;
}
