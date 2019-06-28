#include "seconddial.h"
#include "ui_seconddial.h"

SecondDial::SecondDial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondDial)
{
    ui->setupUi(this);
}

SecondDial::~SecondDial()
{
    delete ui;
}
