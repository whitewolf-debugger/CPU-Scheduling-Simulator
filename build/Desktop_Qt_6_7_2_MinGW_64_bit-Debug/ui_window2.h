/********************************************************************************
** Form generated from reading UI file 'window2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW2_H
#define UI_WINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_window2
{
public:
    QRadioButton *FCFS;
    QRadioButton *RR;
    QRadioButton *SJF;
    QRadioButton *SRTF;
    QLabel *label;
    QTableWidget *ProcessTable;
    QGraphicsView *graphicsView;
    QPushButton *Simulate;
    QPushButton *Stop;
    QPushButton *Clean;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTableWidget *resultTable;

    void setupUi(QDialog *window2)
    {
        if (window2->objectName().isEmpty())
            window2->setObjectName("window2");
        window2->resize(967, 548);
        FCFS = new QRadioButton(window2);
        FCFS->setObjectName("FCFS");
        FCFS->setGeometry(QRect(640, 340, 91, 22));
        RR = new QRadioButton(window2);
        RR->setObjectName("RR");
        RR->setGeometry(QRect(640, 370, 91, 22));
        SJF = new QRadioButton(window2);
        SJF->setObjectName("SJF");
        SJF->setGeometry(QRect(640, 400, 91, 22));
        SRTF = new QRadioButton(window2);
        SRTF->setObjectName("SRTF");
        SRTF->setGeometry(QRect(640, 430, 91, 22));
        label = new QLabel(window2);
        label->setObjectName("label");
        label->setGeometry(QRect(610, 310, 171, 21));
        ProcessTable = new QTableWidget(window2);
        if (ProcessTable->columnCount() < 4)
            ProcessTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ProcessTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ProcessTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ProcessTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ProcessTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        ProcessTable->setObjectName("ProcessTable");
        ProcessTable->setGeometry(QRect(30, 30, 401, 261));
        graphicsView = new QGraphicsView(window2);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(20, 330, 501, 192));
        Simulate = new QPushButton(window2);
        Simulate->setObjectName("Simulate");
        Simulate->setGeometry(QRect(700, 510, 80, 24));
        Stop = new QPushButton(window2);
        Stop->setObjectName("Stop");
        Stop->setGeometry(QRect(790, 510, 80, 24));
        Clean = new QPushButton(window2);
        Clean->setObjectName("Clean");
        Clean->setGeometry(QRect(880, 510, 80, 24));
        label_2 = new QLabel(window2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(480, 10, 49, 16));
        label_3 = new QLabel(window2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 310, 91, 16));
        label_4 = new QLabel(window2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 10, 49, 16));
        resultTable = new QTableWidget(window2);
        resultTable->setObjectName("resultTable");
        resultTable->setGeometry(QRect(470, 30, 401, 261));

        retranslateUi(window2);

        QMetaObject::connectSlotsByName(window2);
    } // setupUi

    void retranslateUi(QDialog *window2)
    {
        window2->setWindowTitle(QCoreApplication::translate("window2", "Dialog", nullptr));
        FCFS->setText(QCoreApplication::translate("window2", "FCFS", nullptr));
        RR->setText(QCoreApplication::translate("window2", "RR", nullptr));
        SJF->setText(QCoreApplication::translate("window2", "SJF", nullptr));
        SRTF->setText(QCoreApplication::translate("window2", "SRTF", nullptr));
        label->setText(QCoreApplication::translate("window2", "Select Scheduling Algorithm", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ProcessTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("window2", "Process ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ProcessTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("window2", "Arrival Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ProcessTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("window2", "Burst Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ProcessTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("window2", "Color", nullptr));
        Simulate->setText(QCoreApplication::translate("window2", "Simulate", nullptr));
        Stop->setText(QCoreApplication::translate("window2", "Stop", nullptr));
        Clean->setText(QCoreApplication::translate("window2", "Clear", nullptr));
        label_2->setText(QCoreApplication::translate("window2", "Result", nullptr));
        label_3->setText(QCoreApplication::translate("window2", "Gantt Chart", nullptr));
        label_4->setText(QCoreApplication::translate("window2", "Input", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window2: public Ui_window2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW2_H
