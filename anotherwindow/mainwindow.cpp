#include "mainwindow.h"
#include "ui_mainwindow.h"


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
//    SecondDial secDialog;
//    secDialog.setModal(true);
//    secDialog.exec();
//    hide();
    SecondDialog = new SecondDial(this);
    SecondDialog->show();
    ui->textBrowser->setText("You open second page succesfully");
    while(1)
    ui->textEdit->setFontItalic(true);
}

void MainWindow::on_pushButton_2_clicked()
{
    thirdpage = new thirddial(this);
    thirdpage->show();
    ui->textBrowser_2->setText("You open third page succesfully");
      ui->textEdit->setTextBackgroundColor("red");
}

