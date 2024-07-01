#ifndef PATH_H
#define PATH_H

#include <QWidget>
#include <QScrollArea>
#include <QScrollBar>
#include <QTimer>
#include <QVector>
#include <QPushButton>
#include <QMessageBox>
#include "flashcard_pack.h"

namespace Ui {
class Path;
}

class Path : public QWidget
{
    Q_OBJECT

public:
    explicit Path(QWidget *parent = nullptr);
    ~Path();
    QVector<Progress_button*>* get_progress_array();
private:
    Ui::Path *ui;
    QVector<Progress_button*> progress_array;
    int len_array;
    int next_task;
private slots:
    void button_clicked();
    void tonexttask();
};

#endif // PATH_H
