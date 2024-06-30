#include "path.h"
#include "ui_path.h"

Path::Path(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Path)
{
    ui->setupUi(this);
}

Path::~Path()
{
    delete ui;
}
