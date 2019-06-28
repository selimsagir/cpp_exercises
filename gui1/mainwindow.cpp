#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("Hello World!!");


}

void MainWindow::on_pushButton_2_clicked()
{
     ui->label->setWordWrap(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::about(this,"MY MESSAGE IS : ", "Hello World !!");
}
