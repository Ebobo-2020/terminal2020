#include "glavwindows.h"
#include "ui_glavwindows.h"
#include "mainwindow.h"

GlavWindows::GlavWindows(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GlavWindows)
{
    ui->setupUi(this);
}

GlavWindows::~GlavWindows()
{
    delete ui;
}



void GlavWindows::on_pushButton_clicked()
{

}
