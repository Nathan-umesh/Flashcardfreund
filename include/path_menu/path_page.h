#ifndef PATH_PAGE_H
#define PATH_PAGE_H

#include <QWidget>
#include <QScrollArea>
#include <QScrollBar>
#include <QTimer>
#include <QVector>
#include <QPushButton>
#include <QMessageBox>
#include "include/path_menu/flashcard_button.h"

namespace Ui {
class pathPage;
}

class pathPage : public QWidget
{
    Q_OBJECT

public:
    explicit pathPage(QWidget *parent = nullptr);
    ~pathPage();
    QVector<progressButton*>* get_progress_array();
private:
    Ui::pathPage *ui;
    QVector<progressButton*> progress_array;
    int len_array;
    int next_task;
private slots:
    void button_clicked();
    void tonexttask();
};

#endif // PATH_PAGE_H
