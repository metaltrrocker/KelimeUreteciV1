#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QMessageBox>
#include <QProcess>
#include <QTimer>
#include <QDebug>
#include <QApplication>

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

    QMessageBox mesajkutusu;
    QDir yol("/home/");
    QString s;
    int dizi[94];
    int buyukharf[26];
    int kucukharf[26];
    int sayilar[10];
    int ozelkarakterler[33];
    int sayac;
    int l1=0;
    int l2=0;
    int l3=0;
    int l4=0;
    int kelimeboyutu=0;
    int x,y,z,t,w,q,m,n,g,h;
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

    /*  Ascii için seçeneklere göre diziyi yapılandırıyoruz.
        Sıralama: Büyük Harf > Küçük harf > Sayılar > Özel karakterler
        Ascii tablosundan decimal olarak değer aralıkları;
        Büyük Harf-> checkbox2 - [65-90]
        Küçük harf-> checkbox - [97-122]
        Sayılar-> checkbox3 - [48-57]
        Özel karakterler(printable)-> checkbox4 - [32-47],[58-64],[91-96],[123-126]
    */



    //Karakterlerin diziye aktarılması
    sayac = 0;
    for(int buyuk=65;buyuk<=90;buyuk++)
    {
        buyukharf[sayac]=buyuk;
        sayac++;
    }
    sayac = 0;
    for(int kucuk=97;kucuk<=122;kucuk++)
    {
        kucukharf[sayac]=kucuk;
        sayac++;
    }
    sayac = 0;
    for(int sayi=48;sayi<=57;sayi++)
    {
        sayilar[sayac]=sayi;
        sayac++;
    }
    sayac = 0;
    for(int ozel=32;ozel<=47;ozel++)
    {
        ozelkarakterler[sayac]=ozel;
        sayac++;
    }
    sayac=16;
    for(int ozel=58;ozel<=64;ozel++)
    {
        ozelkarakterler[sayac]=ozel;
        sayac++;
    }
    sayac = 23;
    for(int ozel=91;ozel<=96;ozel++)
    {
        ozelkarakterler[sayac]=ozel;
        sayac++;
    }
    sayac = 29;
    for(int ozel=123;ozel<=126;ozel++)
    {
        ozelkarakterler[sayac]=ozel;
        sayac++;
    }
    //sayac son değeri = 33 olmalı!
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

            /*
            //Karakter seti uçbirime yollama
            for(int j=0;j<26;j++)
                qDebug() << QVariant(buyukharf[j]).toChar();
            for(int j=0;j<26;j++)
                qDebug() << QVariant(kucukharf[j]).toChar();
            for(int j=0;j<10;j++)
                qDebug() << QVariant(sayilar[j]).toChar();
            for(int j=0;j<33;j++)
                qDebug() << QVariant(ozelkarakterler[j]).toChar();
*/


            for(int j=0;j<=94;j++)
                dizi[j]=32;


            //Checkboxlara göre dizi[]'ye karakterlerin atanması
            if(ui->checkBox_2->isChecked())
            {
                kelimeboyutu = kelimeboyutu + 26;
                for(l1=0;l1<26;l1++)
                    dizi[l1+l2+l3+l4]=buyukharf[l1];
            }
            if(ui->checkBox->isChecked())
            {
                kelimeboyutu = kelimeboyutu + 26;
                for(l2=0;l2<26;l2++)
                    dizi[l1+l2+l3+l4]=kucukharf[l2];
            }
            if(ui->checkBox_3->isChecked())
            {
                kelimeboyutu = kelimeboyutu + 10;
                for(l3=0;l3<10;l3++)
                    dizi[l1+l2+l3+l4]=sayilar[l3];
            }
            if(ui->checkBox_4->isChecked())
            {
                kelimeboyutu = kelimeboyutu + 33;
                for(l4=0;l4<33;l4++)
                    dizi[l1+l2+l3+l4]=ozelkarakterler[l4];
            }
            qDebug() << "Karakter çeşidi sayısı: " << kelimeboyutu;
            // Kelimelerin oluşturulmaya başlandığı bölüm

            for(int j=0;j<=94;j++)
                qDebug() << QVariant(dizi[j]).toChar();


            //Kullanıcı İşlemi Başlata tıkladığı zaman dosya boyutu,toplam kelime bilgiler verilecek ve
            //İşleme devam etmesi için onay alınacak.(Dosya boyutu ve işlem uzun sürdüğü için sistem yanıt vermeyebilir!)
            //QMessageBox::question(NULL,"Uyarı","Bu işlem uzun sürebilir ve sisteminizin yanıt vermemesine neden olabilir!\nDevam etmek istediğinize emin misiniz?",QMessageBox::Yes,QMessageBox::No);
            mesajkutusu.setText("Bu işlem uzun sürebilir ve sisteminizin yanıt vermemesine neden olabilir!");
            mesajkutusu.setInformativeText("Devam etmek istediğinize emin misiniz?");
            mesajkutusu.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            mesajkutusu.setDefaultButton(QMessageBox::No);
            mesajkutusu.setIcon(QMessageBox::Critical);
            mesajkutusu.setWindowTitle("Uyarı!");
            int cevap = mesajkutusu.exec();
            switch (cevap) {
            case QMessageBox::Yes:


                ui->label_11->setText("Lütfen işlemin tamamlanmasını bekleyin");

                //Dosyaya yazmanın başlaması(Kelime Oluşturma)
                switch (ui->comboBox->currentIndex()) {
                case 0:
                    for(x=0; x<kelimeboyutu; x++)
                    {
                        for(y=0; y<kelimeboyutu; y++)
                        {
                            for(int z=0; z<kelimeboyutu; z++)
                            {
                                //Dosyaya yazma işlemi
                                stream << on_ek;
                                stream << QVariant(dizi[z]).toChar() << QVariant(dizi[y]).toChar() << QVariant(dizi[x]).toChar();
                                stream << son_ek << endl;
                            }
                        }
                    }
                    break;
                case 1:
                    for(x=0; x<=kelimeboyutu; x++)
                    {
                        for(y=0; y<=kelimeboyutu; y++)
                        {
                            for(z=0; z<=kelimeboyutu; z++)
                            {
                                for(t=0; t<=kelimeboyutu; t++)
                                {
                                    //Dosyaya yazma işlemi
                                    stream << on_ek;
                                    stream << QVariant(dizi[t]).toChar() << QVariant(dizi[z]).toChar() << QVariant(dizi[y]).toChar() << QVariant(dizi[x]).toChar();
                                    stream << son_ek << endl;
                                }
                            }
                        }
                    }
                    break;
                case 2:
                    for(x=0; x<=kelimeboyutu; x++)
                    {
                        for(y=0; y<=kelimeboyutu; y++)
                        {
                            for(z=0; z<=kelimeboyutu; z++)
                            {
                                for(t=0; t<=kelimeboyutu; t++)
                                {
                                    for(w=0; w<=kelimeboyutu; w++)
                                    {
                                        //Dosyaya yazma işlemi
                                        stream << on_ek;
                                        stream << QVariant(dizi[w]).toChar() << QVariant(dizi[t]).toChar() << QVariant(dizi[z]).toChar() << QVariant(dizi[y]).toChar() << QVariant(dizi[x]).toChar();
                                        stream << son_ek << endl;
                                    }
                                }
                            }
                        }
                    }
                    break;
                case 3:
                    for(x=0; x<=kelimeboyutu; x++)
                    {
                        for(y=0; y<=kelimeboyutu; y++)
                        {
                            for(z=0; z<=kelimeboyutu; z++)
                            {
                                for(t=0; t<=kelimeboyutu; t++)
                                {
                                    for(w=0; w<=kelimeboyutu; w++)
                                    {
                                        for(q=0; q<=kelimeboyutu; q++)
                                        {
                                            //Dosyaya yazma işlemi
                                            stream << on_ek;
                                            stream << QVariant(dizi[q]).toChar() << QVariant(dizi[w]).toChar() << QVariant(dizi[t]).toChar() << QVariant(dizi[z]).toChar() << QVariant(dizi[y]).toChar() << QVariant(dizi[x]).toChar();
                                            stream << son_ek << endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
                case 4:
                    for(x=0; x<=kelimeboyutu; x++)
                    {
                        for(y=0; y<=kelimeboyutu; y++)
                        {
                            for(z=0; z<=kelimeboyutu; z++)
                            {
                                for(t=0; t<=kelimeboyutu; t++)
                                {
                                    for(w=0; w<=kelimeboyutu; w++)
                                    {
                                        for(q=0; q<=kelimeboyutu; q++)
                                        {
                                            for(m=0; m<=kelimeboyutu; m++)
                                            {
                                                //Dosyaya yazma işlemi
                                                stream << on_ek;
                                                stream << QVariant(dizi[6]).toChar() << QVariant(dizi[5]).toChar() << QVariant(dizi[4]).toChar() << QVariant(dizi[3]).toChar() << QVariant(dizi[2]).toChar() << QVariant(dizi[1]).toChar() << QVariant(dizi[0]).toChar();
                                                stream << son_ek << endl;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
                case 5:
                    for(x=0; x<=kelimeboyutu; x++)
                    {
                        for(y=0; y<=kelimeboyutu; y++)
                        {
                            for(z=0; z<=kelimeboyutu; z++)
                            {
                                for(t=0; t<=kelimeboyutu; t++)
                                {
                                    for(w=0; w<=kelimeboyutu; w++)
                                    {
                                        for(q=0; q<=kelimeboyutu; q++)
                                        {
                                            for(m=0; m<=kelimeboyutu; m++)
                                            {
                                                for(n=0; n<=kelimeboyutu; n++)
                                                {
                                                    //Dosyaya yazma işlemi
                                                    stream << on_ek;
                                                    stream << QVariant(dizi[7]).toChar() << QVariant(dizi[6]).toChar() << QVariant(dizi[5]).toChar() << QVariant(dizi[4]).toChar() << QVariant(dizi[3]).toChar() << QVariant(dizi[2]).toChar() << QVariant(dizi[1]).toChar() << QVariant(dizi[0]).toChar();
                                                    stream << son_ek << endl;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
                case 6:
                    for(x=0; x<=kelimeboyutu; x++)
                    {
                        for(y=0; y<=kelimeboyutu; y++)
                        {
                            for(z=0; z<=kelimeboyutu; z++)
                            {
                                for(t=0; t<=kelimeboyutu; t++)
                                {
                                    for(w=0; w<=kelimeboyutu; w++)
                                    {
                                        for(q=0; q<=kelimeboyutu; q++)
                                        {
                                            for(m=0; m<=kelimeboyutu; m++)
                                            {
                                                for(n=0; n<=kelimeboyutu; n++)
                                                {
                                                    for(g=0; g<=kelimeboyutu; g++)
                                                    {
                                                        //Dosyaya yazma işlemi
                                                        stream << on_ek;
                                                        stream << QVariant(dizi[8]).toChar() << QVariant(dizi[7]).toChar() << QVariant(dizi[6]).toChar() << QVariant(dizi[5]).toChar() << QVariant(dizi[4]).toChar() << QVariant(dizi[3]).toChar() << QVariant(dizi[2]).toChar() << QVariant(dizi[1]).toChar() << QVariant(dizi[0]).toChar();
                                                        stream << son_ek << endl;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
                case 7:
                    for(x=0; x<=kelimeboyutu; x++)
                    {
                        for(y=0; y<=kelimeboyutu; y++)
                        {
                            for(z=0; z<=kelimeboyutu; z++)
                            {
                                for(t=0; t<=kelimeboyutu; t++)
                                {
                                    for(w=0; w<=kelimeboyutu; w++)
                                    {
                                        for(q=0; q<=kelimeboyutu; q++)
                                        {
                                            for(m=0; m<=kelimeboyutu; m++)
                                            {
                                                for(n=0; n<=kelimeboyutu; n++)
                                                {
                                                    for(g=0; g<=kelimeboyutu; g++)
                                                    {
                                                        for(h=0; h<=kelimeboyutu; h++)
                                                        {
                                                            //Dosyaya yazma işlemi
                                                            stream << on_ek;
                                                            stream << QVariant(dizi[9]).toChar() << QVariant(dizi[8]).toChar() << QVariant(dizi[7]).toChar() << QVariant(dizi[6]).toChar() << QVariant(dizi[5]).toChar() << QVariant(dizi[4]).toChar() << QVariant(dizi[3]).toChar() << QVariant(dizi[2]).toChar() << QVariant(dizi[1]).toChar() << QVariant(dizi[0]).toChar();
                                                            stream << son_ek << endl;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
                }

                // Ascii sınırları
                /*
                //progress bar'ı en dıştaki döngünün içine koyup artış değerini hesaplat!
                ui->progressBar->setValue(ui->progressBar->value()+4);
                */
                // uçbirim çıktısı
                qDebug("İşlem Tamamlandı!");

                ui->label_11->setText("İşlem Tamamlandı");
                // İşlem bitti
                ui->progressBar->setValue(100);
                file.close();
                break;

            case QMessageBox::No:
                qDebug()<< "Hayır seçildi";
                //qApp->quit();
                ui->label_11->setText("İşlem kullanıcı tarafından iptal edildi!");
                break;
            }





        }

        //Dosyayı kapatır

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




void MainWindow::on_action_zel_Se_im_triggered()
{

}
