#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QMessageBox>
#include <QProcess>
#include <QTimer>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_comboBox_activated(int index)
{
    ui->label_11->setText("Kelime Uzunluğu "+ ui->comboBox->currentText()+" olarak ayarlandı!");
    switch (index) {
    case 0:
        ui->label_14->setText("1,7 Mb");
        break;
    case 1:
        ui->label_14->setText("Mb");
        break;
    case 2:
        ui->label_14->setText("Mb");
        break;
    case 3:
        ui->label_14->setText("Mb");
        break;
    case 4:
        ui->label_14->setText("Mb");
        break;
    case 5:
        ui->label_14->setText("Mb");
        break;
    case 6:
        ui->label_14->setText("Mb");
        break;
    case 7:
        ui->label_14->setText("Mb");
        break;
    }
}

void MainWindow::on_pushButton_clicked()
{

    QDir yol("/home/");
    QString s;
    int dizi[8];
    QString on_ek,son_ek;
    s = yol.relativeFilePath("Kelime_Listesi.liste");
    //QString dosya = "Kelime_Listesi";

    // QFile dosyayı oluşturdu.
    QFile file(s);

    //QIODevice::Truncate, Dosyanın içeriğini temizler.
    file.open(QIODevice::ReadWrite | QIODevice::Truncate);

    QTextStream stream(&file);

    on_ek = ui->lineEdit->text();
    son_ek = ui-> lineEdit_2->text();


    //Checkbox'ların seçili olup olmadığını kontrol et. Seçim yapılmadıysa açılır pencere ile uyarı ver.
    if(ui->comboBox->currentIndex()==-1)
    {
        QMessageBox::warning(NULL,"Uyarı","Lütfen kelime uzunluğunu seçiniz!");
    }
    else
    {
        if(!ui->checkBox->isChecked() && !ui->checkBox_2->isChecked() && !ui->checkBox_3->isChecked() && !ui->checkBox_4->isChecked())
        {
            QMessageBox::warning(NULL,"Uyarı","İşlemi başlatabilmek için lütfen Büyük Harf, Küçük Harf, Sayılar\nveya Özel Karakterler seçeneklerinden en az birini işaretleyiniz!");
        }
        else
        {
            // Kelimelerin oluşturulmaya başlandığı bölüm
            ui->label_11->setText("Lütfen işlemin tamamlanmasını bekleyin");

            switch (ui->comboBox->currentIndex()) {
            case 0:
                for(dizi[0]=65; dizi[0]<=90; dizi[0]++)
                {
                    for(dizi[1]=65; dizi[1]<=90; dizi[1]++)
                    {
                        for(dizi[2]=65; dizi[2]<=90; dizi[2]++)
                        {
                            //Dosyaya yazma işlemi
                            stream << on_ek;
                            stream << QVariant(dizi[2]).toChar() << QVariant(dizi[1]).toChar() << QVariant(dizi[0]).toChar();
                            stream << son_ek << endl;
                        }
                    }
                }
                break;
            case 1:
                for(dizi[0]=65; dizi[0]<=90; dizi[0]++)
                {
                    for(dizi[1]=65; dizi[1]<=90; dizi[1]++)
                    {
                        for(dizi[2]=65; dizi[2]<=90; dizi[2]++)
                        {
                            for(dizi[3]=65; dizi[3]<=90; dizi[3]++)
                            {
                                //Dosyaya yazma işlemi
                                stream << on_ek;
                                stream << QVariant(dizi[3]).toChar() << QVariant(dizi[2]).toChar() << QVariant(dizi[1]).toChar() << QVariant(dizi[0]).toChar();
                                stream << son_ek << endl;
                            }
                        }
                    }
                }
                break;
            case 2:
                for(dizi[0]=65; dizi[0]<=90; dizi[0]++)
                {
                    for(dizi[1]=65; dizi[1]<=90; dizi[1]++)
                    {
                        for(dizi[2]=65; dizi[2]<=90; dizi[2]++)
                        {
                            for(dizi[3]=65; dizi[3]<=90; dizi[3]++)
                            {
                                for(dizi[4]=65; dizi[4]<=90; dizi[4]++)
                                {
                                    //Dosyaya yazma işlemi
                                    stream << on_ek;
                                    stream << QVariant(dizi[4]).toChar() << QVariant(dizi[3]).toChar() << QVariant(dizi[2]).toChar() << QVariant(dizi[1]).toChar() << QVariant(dizi[0]).toChar();
                                    stream << son_ek << endl;
                                }
                            }
                        }
                    }
                }
                break;
            case 3:
                for(dizi[0]=65; dizi[0]<=90; dizi[0]++)
                {
                    for(dizi[1]=65; dizi[1]<=90; dizi[1]++)
                    {
                        for(dizi[2]=65; dizi[2]<=90; dizi[2]++)
                        {
                            for(dizi[3]=65; dizi[3]<=90; dizi[3]++)
                            {
                                for(dizi[4]=65; dizi[4]<=90; dizi[4]++)
                                {
                                    for(dizi[5]=65; dizi[5]<=90; dizi[5]++)
                                    {
                                        //Dosyaya yazma işlemi
                                        stream << on_ek;
                                        stream << QVariant(dizi[5]).toChar() << QVariant(dizi[4]).toChar() << QVariant(dizi[3]).toChar() << QVariant(dizi[2]).toChar() << QVariant(dizi[1]).toChar() << QVariant(dizi[0]).toChar();
                                        stream << son_ek << endl;
                                    }
                                }
                            }
                        }
                    }
                }
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            }

            // uçbirim çıktısı
            qDebug("İşlem Tamamlandı!");

            ui->label_11->setText("İşlem Tamamlandı");
            // İşlem bitti
            ui->progressBar->setValue(100);

        }

        //Dosyayı kapatır
        file.close();

        //    QTimer timer1;
        //    ui->label_14->setText(QString::number(timer1.interval());
        //    QTimer::singleShot(3000, &a, SLOT(quit()));
        //    timer1.setInterval(60);
        //    timer1.start(10);
        //    qDebug()<< timer1.interval();


    }
}

void MainWindow::on_actionHakk_nda_triggered()
{
    // Yeni satır için \n kullan.
    QMessageBox::information(NULL,"Hakkında","Bu yazılım Samet Kamgul tarafından yazılmıştır.\nİletişim:  metaltrrocker@yahoo.com.tr");
}

void MainWindow::on_pushButton_2_clicked()
{
    // Uygulamadan direk çıkış yapar
    //

    // Uygulamadan direk çıkış yapar Alternatif olarak
    //QApplication::quit();
    // alttaki ile farkını araştırmadım
    //qApp->quit();
    exit(1);

    // Yeni form oluşturur.
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

void MainWindow::on_actionFormu_Temizle_triggered()
{
    //Formu Temizleme
    ui->comboBox->setCurrentIndex(-1);
    ui->checkBox->setChecked(false);
    ui->checkBox_2->setChecked(false);
    ui->checkBox_3->setChecked(false);
    ui->checkBox_4->setChecked(false);
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->progressBar->setValue(0);
    ui->label_11->setText("Lütfen Kelime Uzunluğunu Ayarlayın");
    ui->label_14->setText("İşlemin Başlaması Bekleniyor!");
}

void MainWindow::on_actionKullan_m_triggered()
{
    QMessageBox::information(NULL,"Kullanımı","Programı sıralı şifreler veya kelimeler oluşturmak için kullanabilirsiniz.\nİşlemi başlatmadan önce boş alanın tahmini boyuttan fazla olduğundan emin olun.");
}


