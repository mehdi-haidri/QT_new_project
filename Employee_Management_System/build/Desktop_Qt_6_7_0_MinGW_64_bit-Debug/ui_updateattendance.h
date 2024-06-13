/********************************************************************************
** Form generated from reading UI file 'updateattendance.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEATTENDANCE_H
#define UI_UPDATEATTENDANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_UpdateAttendance
{
public:
    QLabel *label;
    QLabel *pending_leaves;
    QLabel *label_2;
    QSpinBox *spinBox;
    QPushButton *pushButton;

    void setupUi(QDialog *UpdateAttendance)
    {
        if (UpdateAttendance->objectName().isEmpty())
            UpdateAttendance->setObjectName("UpdateAttendance");
        UpdateAttendance->resize(352, 170);
        UpdateAttendance->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(UpdateAttendance);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 91, 21));
        label->setStyleSheet(QString::fromUtf8("color: black;"));
        pending_leaves = new QLabel(UpdateAttendance);
        pending_leaves->setObjectName("pending_leaves");
        pending_leaves->setGeometry(QRect(160, 20, 61, 21));
        label_2 = new QLabel(UpdateAttendance);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 70, 131, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: black;"));
        spinBox = new QSpinBox(UpdateAttendance);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(170, 70, 51, 31));
        pushButton = new QPushButton(UpdateAttendance);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 120, 101, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 130, 181); \n"
"border: none;\n"
"color: white;\n"
"font-weight: 500;"));

        retranslateUi(UpdateAttendance);

        QMetaObject::connectSlotsByName(UpdateAttendance);
    } // setupUi

    void retranslateUi(QDialog *UpdateAttendance)
    {
        UpdateAttendance->setWindowTitle(QCoreApplication::translate("UpdateAttendance", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UpdateAttendance", "Pending leaves: ", nullptr));
        pending_leaves->setText(QString());
        label_2->setText(QCoreApplication::translate("UpdateAttendance", "Set Approved leaves: ", nullptr));
        pushButton->setText(QCoreApplication::translate("UpdateAttendance", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateAttendance: public Ui_UpdateAttendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEATTENDANCE_H
