#include "include/path_menu/path_page.h"
#include "ui_path.h"

pathPage::pathPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pathPage)
    ,len_array(20)
    , next_task(1)
{
    ui->setupUi(this);
    // creating scrollable area
    auto scrollarea_widget = new QWidget(ui->scrollArea);
    auto path_layout = new QVBoxLayout(scrollarea_widget);
    // creating buttons to be displayed in scrollable area
    for(int i = 0; i < len_array; i++){
        auto progress_button = new flashcardButton();
        progress_button->setFixedHeight(200);
        progress_button->setText("Locked");
        connect(progress_button, &progressButton::released, this, &pathPage::button_clicked);
        path_layout->addWidget(progress_button);
        progress_array.insert(0, progress_button);
    };
    // first button needs to be enabled at the start
    progress_array.at(0)->unlock();
    progress_array.at(0)->setText("Flashcard pack 1");
    scrollarea_widget->setLayout(path_layout);
    ui->scrollArea->setWidget(scrollarea_widget);
    //sets scrollbar at the bottom of the screen
    QTimer::singleShot(0, this, [this]{ui->scrollArea->verticalScrollBar()->setValue(ui->scrollArea->verticalScrollBar()->maximum());});
}
pathPage::~pathPage()
{
    delete ui;
}

QVector<progressButton*>* pathPage::get_progress_array()
{
    return &progress_array;
}

void pathPage::button_clicked()
{
    progressButton* button = qobject_cast<progressButton*>(sender());
    bool actiondone = button->button_action();
    if (actiondone && (button == progress_array.at(next_task-1)) && (next_task < len_array))
        tonexttask();
    QMessageBox::warning(this, "congrats", "task done");

}

void pathPage::tonexttask()
{
    if (progress_array.at(next_task)->isgoalsmet() && (progress_array.at(next_task-1)->isunlocked)){
        progress_array.at(next_task)->unlock();
        progress_array.at(next_task)->setText("Flashcard pack " + QString::number(next_task+1));
        next_task++;
    }
}
