#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->toolBar->setMovable(false);

    auto tbar_widget = new QWidget(this);
    auto tbar_layout = new QHBoxLayout(tbar_widget);

    auto tbar_left_spacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);
    tbar_layout->addItem(tbar_left_spacer);

    auto tbarbutton_path = new QToolButton();
    tbarbutton_path->setText("Path");
    tbarbutton_path->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Minimum);
    tbar_layout->addWidget(tbarbutton_path);

    auto tbar_middle_spacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);
    tbar_layout->addItem(tbar_middle_spacer);

    auto tbarbutton_flashcard = new QToolButton();
    tbarbutton_flashcard->setText("Flashcards");
    tbarbutton_flashcard->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Minimum);
    tbar_layout->addWidget(tbarbutton_flashcard);

    auto tbar_right_spacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);
    tbar_layout->addItem(tbar_right_spacer);

    tbar_widget->setLayout(tbar_layout);

    ui->toolBar->addWidget(tbar_widget);
}

MainWindow::~MainWindow()
{
    delete ui;
}