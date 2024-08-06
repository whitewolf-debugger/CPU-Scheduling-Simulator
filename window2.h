#ifndef WINDOW2_H
#define WINDOW2_H

#include <QDialog>

namespace Ui {
class window2;
}

class window2 : public QDialog
{
    Q_OBJECT

public:
    explicit window2(int numProcesses,QWidget *parent = nullptr);
    ~window2();

private slots:
    void on_FCFS_toggled(bool checked);

    void on_RR_toggled(bool checked);

    void on_SJF_toggled(bool checked);

    void on_SRTF_toggled(bool checked);

    void display_result();

private:
    Ui::window2 *ui;
};

#endif // WINDOW2_H
