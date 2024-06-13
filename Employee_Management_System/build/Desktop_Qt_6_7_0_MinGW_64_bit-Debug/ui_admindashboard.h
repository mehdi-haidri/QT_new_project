/********************************************************************************
** Form generated from reading UI file 'admindashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDASHBOARD_H
#define UI_ADMINDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminDashboard
{
public:
    QWidget *nav_widget;
    QPushButton *logout_btn;
    QLabel *admin_label;
    QWidget *dashboard_widget;
    QLabel *welcome_label;
    QWidget *widget1;
    QLabel *label;
    QLabel *total_employees_label;
    QWidget *widget2;
    QLabel *label_3;
    QLabel *newemployees_label;
    QWidget *widget;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QListWidget *id_listwidget;
    QListWidget *department_listwidget;
    QListWidget *name_listwidget;
    QLabel *label_7;
    QWidget *widget_2;
    QLabel *label_11;
    QPushButton *add_new_employee_btn;
    QPushButton *remove_employee_btn;
    QWidget *widget_3;
    QLabel *label_12;
    QPushButton *asign_task_btn;
    QWidget *widget_4;
    QLabel *label_13;
    QPushButton *manage_attendance_btn;

    void setupUi(QDialog *AdminDashboard)
    {
        if (AdminDashboard->objectName().isEmpty())
            AdminDashboard->setObjectName("AdminDashboard");
        AdminDashboard->resize(1366, 768);
        AdminDashboard->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        nav_widget = new QWidget(AdminDashboard);
        nav_widget->setObjectName("nav_widget");
        nav_widget->setGeometry(QRect(0, 0, 51, 768));
        nav_widget->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 130, 181); \n"
"border: none;"));
        logout_btn = new QPushButton(nav_widget);
        logout_btn->setObjectName("logout_btn");
        logout_btn->setGeometry(QRect(10, 160, 21, 21));
        logout_btn->setCursor(QCursor(Qt::PointingHandCursor));
        logout_btn->setStyleSheet(QString::fromUtf8("border: none;\n"
" background-color: transparent;"));
        admin_label = new QLabel(nav_widget);
        admin_label->setObjectName("admin_label");
        admin_label->setGeometry(QRect(10, 30, 41, 31));
        admin_label->setPixmap(QPixmap(QString::fromUtf8("../icons/admin.png")));
        dashboard_widget = new QWidget(AdminDashboard);
        dashboard_widget->setObjectName("dashboard_widget");
        dashboard_widget->setGeometry(QRect(60, 0, 561, 151));
        welcome_label = new QLabel(dashboard_widget);
        welcome_label->setObjectName("welcome_label");
        welcome_label->setGeometry(QRect(40, 30, 221, 31));
        welcome_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 20px;\n"
"font-weight: 1000;"));
        widget1 = new QWidget(dashboard_widget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(30, 80, 141, 61));
        label = new QLabel(widget1);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 111, 20));
        label->setStyleSheet(QString::fromUtf8("color: dark-grey;\n"
"font-size: 15px;"));
        total_employees_label = new QLabel(widget1);
        total_employees_label->setObjectName("total_employees_label");
        total_employees_label->setGeometry(QRect(60, 40, 21, 21));
        total_employees_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;"));
        widget2 = new QWidget(dashboard_widget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(190, 80, 141, 61));
        label_3 = new QLabel(widget2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 10, 111, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: dark-grey;\n"
"font-size: 15px;"));
        newemployees_label = new QLabel(widget2);
        newemployees_label->setObjectName("newemployees_label");
        newemployees_label->setGeometry(QRect(70, 40, 16, 21));
        newemployees_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;"));
        widget = new QWidget(AdminDashboard);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 190, 721, 231));
        widget->setStyleSheet(QString::fromUtf8(""));
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 10, 91, 21));
        label_8->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;\n"
"font-weight: 500;"));
        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(140, 10, 51, 16));
        label_9->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;\n"
"font-weight: 500;"));
        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(250, 10, 91, 16));
        label_10->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;\n"
"font-weight: 500;"));
        id_listwidget = new QListWidget(widget);
        id_listwidget->setObjectName("id_listwidget");
        id_listwidget->setGeometry(QRect(20, 40, 61, 191));
        department_listwidget = new QListWidget(widget);
        department_listwidget->setObjectName("department_listwidget");
        department_listwidget->setGeometry(QRect(280, 40, 121, 191));
        name_listwidget = new QListWidget(widget);
        name_listwidget->setObjectName("name_listwidget");
        name_listwidget->setGeometry(QRect(110, 40, 141, 191));
        label_7 = new QLabel(AdminDashboard);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(100, 160, 191, 21));
        label_7->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 17px;\n"
"font-weight: 1000;"));
        widget_2 = new QWidget(AdminDashboard);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(90, 430, 201, 131));
        label_11 = new QLabel(widget_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 10, 191, 21));
        label_11->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 17px;\n"
"font-weight: 1000;"));
        add_new_employee_btn = new QPushButton(widget_2);
        add_new_employee_btn->setObjectName("add_new_employee_btn");
        add_new_employee_btn->setGeometry(QRect(20, 40, 141, 31));
        add_new_employee_btn->setCursor(QCursor(Qt::PointingHandCursor));
        add_new_employee_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 130, 181); \n"
"border: none;\n"
"color: white;\n"
"font-weight: 500;\n"
""));
        remove_employee_btn = new QPushButton(widget_2);
        remove_employee_btn->setObjectName("remove_employee_btn");
        remove_employee_btn->setGeometry(QRect(20, 90, 141, 31));
        remove_employee_btn->setCursor(QCursor(Qt::PointingHandCursor));
        remove_employee_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 130, 181); \n"
"border: none;\n"
"color: white;\n"
"font-weight: 500;\n"
""));
        widget_3 = new QWidget(AdminDashboard);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(90, 560, 191, 91));
        label_12 = new QLabel(widget_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 10, 111, 21));
        label_12->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 17px;\n"
"font-weight: 1000;"));
        asign_task_btn = new QPushButton(widget_3);
        asign_task_btn->setObjectName("asign_task_btn");
        asign_task_btn->setGeometry(QRect(20, 40, 141, 31));
        asign_task_btn->setCursor(QCursor(Qt::PointingHandCursor));
        asign_task_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 130, 181); \n"
"border: none;\n"
"color: white;\n"
"font-weight: 500;\n"
""));
        widget_4 = new QWidget(AdminDashboard);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(90, 650, 191, 91));
        label_13 = new QLabel(widget_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 0, 171, 21));
        label_13->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 17px;\n"
"font-weight: 1000;"));
        manage_attendance_btn = new QPushButton(widget_4);
        manage_attendance_btn->setObjectName("manage_attendance_btn");
        manage_attendance_btn->setGeometry(QRect(20, 30, 141, 31));
        manage_attendance_btn->setCursor(QCursor(Qt::PointingHandCursor));
        manage_attendance_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 130, 181); \n"
"border: none;\n"
"color: white;\n"
"font-weight: 500;\n"
""));

        retranslateUi(AdminDashboard);

        QMetaObject::connectSlotsByName(AdminDashboard);
    } // setupUi

    void retranslateUi(QDialog *AdminDashboard)
    {
        AdminDashboard->setWindowTitle(QCoreApplication::translate("AdminDashboard", "Dialog", nullptr));
        logout_btn->setText(QString());
        admin_label->setText(QString());
        welcome_label->setText(QCoreApplication::translate("AdminDashboard", "Welcome Back Admin!", nullptr));
        label->setText(QCoreApplication::translate("AdminDashboard", "Total employees", nullptr));
        total_employees_label->setText(QCoreApplication::translate("AdminDashboard", "10", nullptr));
        label_3->setText(QCoreApplication::translate("AdminDashboard", "New employees", nullptr));
        newemployees_label->setText(QCoreApplication::translate("AdminDashboard", "0", nullptr));
        label_8->setText(QCoreApplication::translate("AdminDashboard", "Employee id", nullptr));
        label_9->setText(QCoreApplication::translate("AdminDashboard", "Name", nullptr));
        label_10->setText(QCoreApplication::translate("AdminDashboard", "Department", nullptr));
        label_7->setText(QCoreApplication::translate("AdminDashboard", "Details of employees", nullptr));
        label_11->setText(QCoreApplication::translate("AdminDashboard", "Add/Remove employee", nullptr));
        add_new_employee_btn->setText(QCoreApplication::translate("AdminDashboard", "Add a new employee", nullptr));
        remove_employee_btn->setText(QCoreApplication::translate("AdminDashboard", "Remove an employee", nullptr));
        label_12->setText(QCoreApplication::translate("AdminDashboard", "Assign Task", nullptr));
        asign_task_btn->setText(QCoreApplication::translate("AdminDashboard", "Assign task", nullptr));
        label_13->setText(QCoreApplication::translate("AdminDashboard", "Manage Attendance", nullptr));
        manage_attendance_btn->setText(QCoreApplication::translate("AdminDashboard", "Manage attendance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminDashboard: public Ui_AdminDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDASHBOARD_H
