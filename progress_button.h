#ifndef PROGRESS_BUTTON_H
#define PROGRESS_BUTTON_H
#include <QPushButton>
#include <QWidget>

class Progress_button : public QPushButton
{
    Q_OBJECT
public:
    explicit Progress_button(QWidget *parent = nullptr);
    bool isgoalsmet();
    void unlock();
signals:
};

#endif // PROGRESS_BUTTON_H
