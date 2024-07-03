#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QToolButton>
#include "path.h"
#include "include/flashcards.h"
/*
#include <QHBoxLayout>
#include <QWidget>
#include <QSpacerItem>
#include <QSizePolicy>
*/
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Flashcards flashcards;
    Path path;
private slots:
    void switchtopath();
    void switchtoflashcards();
};
#endif // MAINWINDOW_H
