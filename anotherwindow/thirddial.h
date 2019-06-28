#ifndef THIRDDIAL_H
#define THIRDDIAL_H

#include <QDialog>

namespace Ui {
class thirddial;
}

class thirddial : public QDialog
{
    Q_OBJECT

public:
    explicit thirddial(QWidget *parent = nullptr);
    ~thirddial();

private:
    Ui::thirddial *ui;
};

#endif // THIRDDIAL_H
