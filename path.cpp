#include "path.h"
#include "ui_path.h"

Path::Path(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Path)
    ,len_array(20)
    , next_task(1)
{
    ui->setupUi(this);
    // creating scrollable area
    auto scrollarea_widget = new QWidget(ui->scrollArea);
    auto path_layout = new QVBoxLayout(scrollarea_widget);
    // creating buttons to be displayed in scrollable area
    for(int i = 0; i < len_array; i++){
        auto progress_button = new Progress_button();
        progress_button->setFixedHeight(200);
        progress_button->setText("Task " + QString::number(len_array-i));
        connect(progress_button, &Progress_button::released, this, &Path::button_clicked);
        path_layout->addWidget(progress_button);
        progress_array.insert(0, progress_button);
    };
    // first button needs to be enabled at the start
    progress_array.at(0)->unlock();
    scrollarea_widget->setLayout(path_layout);
    ui->scrollArea->setWidget(scrollarea_widget);
    //sets scrollbar at the bottom of the screen
    QTimer::singleShot(0, this, [this]{ui->scrollArea->verticalScrollBar()->setValue(ui->scrollArea->verticalScrollBar()->maximum());});
}
Path::~Path()
{
    delete ui;
}

void Path::button_clicked()
{
    tonexttask();
    QMessageBox::warning(this, "Title", "it did it");

}

void Path::tonexttask()
{
    if (progress_array.at(next_task)->isgoalsmet() && progress_array.at(next_task-1)->isEnabled()){
        progress_array.at(next_task)->unlock();
        next_task++;
    }
}
