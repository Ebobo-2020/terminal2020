#include "windows2.h"
#include "ui_windows2.h"

windows2::windows2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::windows2)
{
    ui->setupUi(this);
}

windows2::~windows2()
{
    delete ui;
}
