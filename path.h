#ifndef PATH_H
#define PATH_H

#include <QWidget>
#include <QScrollArea>
#include <QScrollBar>
#include <QTimer>
#include <QVector>
#include <QPushButton>

namespace Ui {
class Path;
}

class Path : public QWidget
{
    Q_OBJECT

public:
    explicit Path(QWidget *parent = nullptr);
    ~Path();

private:
    Ui::Path *ui;
};

#endif // PATH_H
