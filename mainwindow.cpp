#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bits/stdc++.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Next_clicked()
{
    QString numProcessesStr = ui->numProcessInput-> toPlainText();
    //now convert it into the integer
    //bool successful;
    int numProcesses = numProcessesStr.toInt();
    //seinding
    //window2* nextwindow = new window2(numProcesses, this);

    // nextWindow.setModal(true);
    // nextWindow.exec();
    //model less approach
    window = new window2(numProcesses,this);
    window->show();
    qDebug() << "Number of Processes:" << numProcesses;

}

