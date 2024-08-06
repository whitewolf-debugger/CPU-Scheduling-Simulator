#include "window2.h"
#include "ui_window2.h"


window2::window2(int numProcesses, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window2)
{
    ui->setupUi(this);
    ui->ProcessTable->setRowCount(numProcesses);
    ui->resultTable->setRowCount(numProcesses);
    ui->resultTable->setColumnCount(5);
}

window2::~window2()
{
    delete ui;
}

void window2::on_FCFS_toggled(bool checked)
{
    if(checked) {

    }
}


void window2::on_RR_toggled(bool checked)
{
    if(checked) {

    }
}


void window2::on_SJF_toggled(bool checked)
{
    if(checked) {

    }
}


void window2::on_SRTF_toggled(bool checked)
{
    if(checked) {

    }
}

void window2::display_result() {

}

