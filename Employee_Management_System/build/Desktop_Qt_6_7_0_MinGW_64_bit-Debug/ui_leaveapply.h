/********************************************************************************
** Form generated from reading UI file 'leaveapply.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEAVEAPPLY_H
#define UI_LEAVEAPPLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_LeaveApply
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpinBox *leave_spinbox;
    QCalendarWidget *leave_calendar;
    QLabel *label_3;

    void setupUi(QDialog *LeaveApply)
    {
        if (LeaveApply->objectName().isEmpty())
            LeaveApply->setObjectName("LeaveApply");
        LeaveApply->resize(692, 481);
        LeaveApply->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(LeaveApply);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 430, 91, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 130, 181); \n"
"border: none;\n"
"color: white;\n"
"font-weight: 500;"));
        label = new QLabel(LeaveApply);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 151, 31));
        label->setStyleSheet(QString::fromUtf8("color: black;"));
        label_2 = new QLabel(LeaveApply);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 340, 131, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: black;"));
        lineEdit = new QLineEdit(LeaveApply);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 370, 631, 41));
        leave_spinbox = new QSpinBox(LeaveApply);
        leave_spinbox->setObjectName("leave_spinbox");
        leave_spinbox->setGeometry(QRect(200, 20, 51, 31));
        leave_calendar = new QCalendarWidget(LeaveApply);
        leave_calendar->setObjectName("leave_calendar");
        leave_calendar->setGeometry(QRect(100, 90, 501, 221));
        leave_calendar->setStyleSheet(QString::fromUtf8("background-color: white; \n"
"color: grey;"));
        label_3 = new QLabel(LeaveApply);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 70, 81, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: black;"));

        retranslateUi(LeaveApply);

        QMetaObject::connectSlotsByName(LeaveApply);
    } // setupUi

    void retranslateUi(QDialog *LeaveApply)
    {
        LeaveApply->setWindowTitle(QCoreApplication::translate("LeaveApply", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("LeaveApply", "Done", nullptr));
        label->setText(QCoreApplication::translate("LeaveApply", "Select number of leaves: ", nullptr));
        label_2->setText(QCoreApplication::translate("LeaveApply", "Reason for leave(s): ", nullptr));
        label_3->setText(QCoreApplication::translate("LeaveApply", "Select date: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LeaveApply: public Ui_LeaveApply {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEAVEAPPLY_H
