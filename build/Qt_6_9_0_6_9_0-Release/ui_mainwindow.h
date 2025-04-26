/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QGridLayout *gridLayout_2;
    QPushButton *findOperator;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QPushButton *findForMonths;
    QPushButton *sotrNameBtn;
    QPushButton *sortPhone;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(815, 609);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_7 = new QGridLayout(centralwidget);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout, 8, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        findOperator = new QPushButton(centralwidget);
        findOperator->setObjectName("findOperator");

        gridLayout_2->addWidget(findOperator, 0, 1, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout_2->addWidget(lineEdit, 0, 0, 1, 1);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");

        gridLayout_2->addWidget(comboBox, 1, 0, 1, 1);

        findForMonths = new QPushButton(centralwidget);
        findForMonths->setObjectName("findForMonths");

        gridLayout_2->addWidget(findForMonths, 1, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_2, 1, 0, 1, 1);

        sotrNameBtn = new QPushButton(centralwidget);
        sotrNameBtn->setObjectName("sotrNameBtn");

        gridLayout_7->addWidget(sotrNameBtn, 3, 0, 1, 1);

        sortPhone = new QPushButton(centralwidget);
        sortPhone->setObjectName("sortPhone");

        gridLayout_7->addWidget(sortPhone, 6, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        findOperator->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200\320\260\320\274", nullptr));
        findForMonths->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \320\274\320\265\321\201\321\217\321\206\321\203", nullptr));
        sotrNameBtn->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276 \321\204\320\260\320\274\320\270\320\273\320\270\320\270", nullptr));
        sortPhone->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276 \320\275\320\276\320\274\320\265\321\200\321\203 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
