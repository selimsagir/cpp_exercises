#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "seconddial.h"
#include "thirddial.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_textBrowser_textChanged();

    void on_textBrowser_anchorClicked(const QUrl &arg1);

private:
    Ui::MainWindow *ui;
    SecondDial *SecondDialog;
    thirddial *thirdpage;
};

#endif // MAINWINDOW_H
