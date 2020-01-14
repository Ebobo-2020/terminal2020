#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QListWidgetItem"
int a = 0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->listWidget->addItem("Menu1");
     ui->listWidget->addItem("Menu2");
      ui->listWidget->addItem("Menu3");
       ui->listWidget->addItem("Menu4");
        ui->listWidget->addItem("Menu5");
         ui->listWidget->addItem("Menu16");
          ui->listWidget->addItem("Menu7");
           ui->listWidget->addItem("Menu18");
            ui->listWidget->addItem("lox");
             ui->listWidget->addItem("lox");
              ui->listWidget->addItem("lox");
               ui->listWidget->addItem("lox");
                ui->listWidget->addItem("lox");
                 ui->listWidget->addItem("lox");
                  ui->listWidget->addItem("lox");
                   ui->listWidget->addItem("lox");
                   ui->listWidget->addItem("Menu1");
                    ui->listWidget->addItem("Menu2");
                     ui->listWidget->addItem("Menu3");
                      ui->listWidget->addItem("Menu4");
                       ui->listWidget->addItem("Menu5");
                        ui->listWidget->addItem("Menu16");
                         ui->listWidget->addItem("Menu7");
                          ui->listWidget->addItem("Menu18");
                           ui->listWidget->addItem("lox");
                            ui->listWidget->addItem("lox");
                             ui->listWidget->addItem("lox");
                              ui->listWidget->addItem("lox");
                               ui->listWidget->addItem("lox");
                                ui->listWidget->addItem("lox");
                                 ui->listWidget->addItem("lox[");
                                  ui->listWidget->addItem("lox");
                                   ui->listWidget->item(0)->setSelected(true);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked()
{
    if (ui->listWidget->currentRow()-1 >= 0){

  ui->listWidget->setCurrentRow( ui->listWidget->currentRow()-1);
    }
}

void MainWindow::on_pushButton_3_clicked()
{
 //   ui->statusBar->showMessage(ui->listWidget->currentItem()->text());
}

void MainWindow::on_pushButton_2_clicked()
{
    if (ui->listWidget->currentRow()+1 <= ui->listWidget -> count() - 1){

    ui->listWidget->setCurrentRow( ui->listWidget->currentRow()+1);

    }
}
