#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QToolButton>
#include "include/path_menu/path_page.h"
#include "include/flashcards_menu/flashcards_page.h"
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
    flashcardsPage flashcards;
    pathPage path;
private slots:
    void switchtopath();
    void switchtoflashcards();
};
#endif // MAINWINDOW_H
