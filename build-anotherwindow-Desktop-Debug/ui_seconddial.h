/********************************************************************************
** Form generated from reading UI file 'seconddial.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDDIAL_H
#define UI_SECONDDIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_SecondDial
{
public:

    void setupUi(QDialog *SecondDial)
    {
        if (SecondDial->objectName().isEmpty())
            SecondDial->setObjectName(QString::fromUtf8("SecondDial"));
        SecondDial->resize(400, 300);

        retranslateUi(SecondDial);

        QMetaObject::connectSlotsByName(SecondDial);
    } // setupUi

    void retranslateUi(QDialog *SecondDial)
    {
        SecondDial->setWindowTitle(QApplication::translate("SecondDial", "Second Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondDial: public Ui_SecondDial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDDIAL_H
