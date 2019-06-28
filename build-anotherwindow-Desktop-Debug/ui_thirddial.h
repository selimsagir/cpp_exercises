/********************************************************************************
** Form generated from reading UI file 'thirddial.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDDIAL_H
#define UI_THIRDDIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_thirddial
{
public:

    void setupUi(QDialog *thirddial)
    {
        if (thirddial->objectName().isEmpty())
            thirddial->setObjectName(QString::fromUtf8("thirddial"));
        thirddial->resize(400, 300);

        retranslateUi(thirddial);

        QMetaObject::connectSlotsByName(thirddial);
    } // setupUi

    void retranslateUi(QDialog *thirddial)
    {
        thirddial->setWindowTitle(QApplication::translate("thirddial", "Third Page", "Third Page"));
    } // retranslateUi

};

namespace Ui {
    class thirddial: public Ui_thirddial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDDIAL_H
