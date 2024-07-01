#ifndef PROGRESS_BUTTON_H
#define PROGRESS_BUTTON_H
#include <QPushButton>

class Progress_button : public QPushButton
{
    Q_OBJECT
public:
    explicit Progress_button(QWidget *parent = nullptr);
    bool isgoalsmet();
    void unlock();
    virtual bool button_action();
signals:
};

#endif // PROGRESS_BUTTON_H
