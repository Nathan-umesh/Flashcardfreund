#ifndef PROGRESS_BUTTON_H
#define PROGRESS_BUTTON_H
#include <QPushButton>

class progressButton : public QPushButton
{
    Q_OBJECT
public:
    explicit progressButton(QWidget *parent = nullptr);
    bool isunlocked;
    bool isgoalsmet();
    void unlock();
    virtual bool button_action();
signals:
};

#endif // PROGRESS_BUTTON_H
