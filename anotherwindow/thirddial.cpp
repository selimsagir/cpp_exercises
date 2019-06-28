#include "thirddial.h"
#include "ui_thirddial.h"

thirddial::thirddial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thirddial)
{
    ui->setupUi(this);
}

thirddial::~thirddial()
{
    delete ui;
}
