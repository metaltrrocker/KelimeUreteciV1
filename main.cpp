#include "mainwindow.h"
#include <QApplication>
#include <QWidget>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // Uçbirim Karşılaması
    qDebug("\n");
    qDebug("**********************************************");
    qDebug("************ Kelime Üreteci v1.0  ************");
    qDebug("************ Yazar : Samet Kamgul ************");
    qDebug("**********************************************");
    qDebug("\n");



    return a.exec();
}
