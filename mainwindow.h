#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_pushButton_clicked();

    void on_actionHakk_nda_triggered();

    void on_pushButton_2_clicked();

    void on_actionFormu_Temizle_triggered();

    void on_actionKullan_m_triggered();

    void on_comboBox_activated(int index);


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
