#include "path.h"
#include "ui_path.h"

Path::Path(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Path)
{
    ui->setupUi(this);
    auto scrollarea_widget = new QWidget(ui->scrollArea);
    auto path_layout = new QVBoxLayout(scrollarea_widget);
    QVector<QPushButton*> progress_array;
    for(int i = 0; i < 20; i++){
        auto progress_button = new QPushButton();
        progress_button->setFixedHeight(200);
        progress_button->setText("Button " + QString::number(20-i));
        path_layout->addWidget(progress_button);
        progress_array.append(progress_button);
    };

    scrollarea_widget->setLayout(path_layout);
    ui->scrollArea->setWidget(scrollarea_widget);

    QTimer::singleShot(0, this, [this]{ui->scrollArea->verticalScrollBar()->setValue(ui->scrollArea->verticalScrollBar()->maximum());});
}
Path::~Path()
{
    delete ui;
}
