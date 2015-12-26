#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QTranslator>
#include <QPushButton>
#include <QSplashScreen>
#include <QThread>

class I : public QThread
{
public:
static void sleep(unsigned long secs) {
QThread::sleep(secs);
}
};
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap("Splashlogo");
    QSplashScreen splash(pixmap);
    splash.show();
    splash.showMessage(QObject::tr("Program Yükleniyor..."),
                    Qt::AlignLeft | Qt::AlignTop, Qt::black);  //This line represents the alignment of text, color and position

    I::sleep(2);
    MainWindow w;
    splash.finish(&w);
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
