#ifndef SECONDDIAL_H
#define SECONDDIAL_H

#include <QDialog>

namespace Ui {
class SecondDial;
}

class SecondDial : public QDialog
{
    Q_OBJECT

public:
    explicit SecondDial(QWidget *parent = nullptr);
    ~SecondDial();

private:
    Ui::SecondDial *ui;
};

#endif // SECONDDIAL_H
