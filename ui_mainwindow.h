/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFormu_Temizle;
    QAction *actionKullan_m;
    QAction *actionHakk_nda;
    QAction *actionDurdur;
    QAction *actionBa_lat;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_10;
    QCheckBox *checkBox_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLabel *label_7;
    QComboBox *comboBox;
    QCheckBox *checkBox_2;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_3;
    QLabel *label;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QFrame *line_2;
    QGridLayout *gridLayout_3;
    QLabel *label_10;
    QLabel *label_11;
    QMenuBar *menuBar;
    QMenu *menuDosya;
    QMenu *menuD_zenle;
    QMenu *menuYard_m;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(360, 342);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/Kelime \303\234reteci \304\260kon-32-23.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("\n"
"background-color: rgb(210, 250, 255);"));
        MainWindow->setIconSize(QSize(32, 32));
        MainWindow->setDocumentMode(true);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(true);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        actionFormu_Temizle = new QAction(MainWindow);
        actionFormu_Temizle->setObjectName(QStringLiteral("actionFormu_Temizle"));
        actionKullan_m = new QAction(MainWindow);
        actionKullan_m->setObjectName(QStringLiteral("actionKullan_m"));
        actionHakk_nda = new QAction(MainWindow);
        actionHakk_nda->setObjectName(QStringLiteral("actionHakk_nda"));
        actionDurdur = new QAction(MainWindow);
        actionDurdur->setObjectName(QStringLiteral("actionDurdur"));
        actionBa_lat = new QAction(MainWindow);
        actionBa_lat->setObjectName(QStringLiteral("actionBa_lat"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 7, 341, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setSizeConstraint(QLayout::SetMaximumSize);
        checkBox_4 = new QCheckBox(verticalLayoutWidget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        gridLayout_10->addWidget(checkBox_4, 6, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(18, 14, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(22, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color:rgb(255, 130, 0)"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_4, 3, 1, 1, 1);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QStringLiteral("color:rgb(255, 130, 0)"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_7, 6, 1, 1, 1);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(235, 229, 255);"));

        gridLayout_10->addWidget(comboBox, 0, 2, 1, 1);

        checkBox_2 = new QCheckBox(verticalLayoutWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy1);
        checkBox_2->setLayoutDirection(Qt::LeftToRight);
        checkBox_2->setAutoFillBackground(false);
        checkBox_2->setStyleSheet(QStringLiteral("color: rgb(235, 229, 255);"));
        checkBox_2->setInputMethodHints(Qt::ImhNone);

        gridLayout_10->addWidget(checkBox_2, 3, 2, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color:rgb(255, 130, 0)"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_3, 2, 1, 1, 1);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("color:rgb(255, 130, 0)"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_6, 5, 1, 1, 1);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(235, 229, 255);"));

        gridLayout_10->addWidget(lineEdit, 1, 2, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color:rgb(255, 130, 0)"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_2, 1, 1, 1, 1);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("color:rgb(255, 130, 0)"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_5, 4, 1, 1, 1);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setStyleSheet(QStringLiteral("background-color: rgb(235, 229, 255);"));

        gridLayout_10->addWidget(lineEdit_2, 2, 2, 1, 1);

        checkBox = new QCheckBox(verticalLayoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setStyleSheet(QStringLiteral("color: rgb(235, 229, 255);"));

        gridLayout_10->addWidget(checkBox, 4, 2, 1, 1);

        checkBox_3 = new QCheckBox(verticalLayoutWidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setStyleSheet(QStringLiteral("color: rgb(235, 229, 255);"));

        gridLayout_10->addWidget(checkBox_3, 5, 2, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QStringLiteral("color:rgb(255, 130, 0)"));
        label->setFrameShape(QFrame::NoFrame);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        gridLayout_10->addWidget(label, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_10);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy3);
        line->setFrameShadow(QFrame::Raised);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy4);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 255);\n"
"color: rgb(85, 85, 255);"));

        gridLayout_2->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy4.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy4);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 255);\n"
"color: rgb(85, 85, 255);"));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        progressBar = new QProgressBar(verticalLayoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        QFont font3;
        font3.setPointSize(6);
        font3.setBold(true);
        font3.setWeight(75);
        font3.setStyleStrategy(QFont::NoAntialias);
        progressBar->setFont(font3);
        progressBar->setStyleSheet(QStringLiteral(""));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout->addWidget(progressBar);

        line_2 = new QFrame(verticalLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy5);
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setWeight(75);
        label_10->setFont(font4);
        label_10->setStyleSheet(QStringLiteral("color: rgb(85, 85, 255);"));

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font4);
        label_11->setStyleSheet(QStringLiteral("color: rgb(85, 85, 255);"));

        gridLayout_3->addWidget(label_11, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 360, 21));
        QFont font5;
        font5.setBold(false);
        font5.setWeight(50);
        menuBar->setFont(font5);
        menuBar->setLayoutDirection(Qt::LeftToRight);
        menuBar->setAutoFillBackground(false);
        menuBar->setDefaultUp(true);
        menuBar->setNativeMenuBar(true);
        menuDosya = new QMenu(menuBar);
        menuDosya->setObjectName(QStringLiteral("menuDosya"));
        menuD_zenle = new QMenu(menuBar);
        menuD_zenle->setObjectName(QStringLiteral("menuD_zenle"));
        menuYard_m = new QMenu(menuBar);
        menuYard_m->setObjectName(QStringLiteral("menuYard_m"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuDosya->menuAction());
        menuBar->addAction(menuD_zenle->menuAction());
        menuBar->addAction(menuYard_m->menuAction());
        menuDosya->addAction(actionDurdur);
        menuDosya->addAction(actionBa_lat);
        menuD_zenle->addAction(actionFormu_Temizle);
        menuYard_m->addAction(actionKullan_m);
        menuYard_m->addAction(actionHakk_nda);

        retranslateUi(MainWindow);
        QObject::connect(actionBa_lat, SIGNAL(triggered()), pushButton, SLOT(click()));
        QObject::connect(pushButton_2, SIGNAL(destroyed()), MainWindow, SLOT(update()));
        QObject::connect(actionDurdur, SIGNAL(triggered()), pushButton_2, SLOT(click()));

        comboBox->setCurrentIndex(0);
        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Kelime \303\234reteci v1.0", 0));
        actionFormu_Temizle->setText(QApplication::translate("MainWindow", "Formu Temizle", 0));
        actionKullan_m->setText(QApplication::translate("MainWindow", "Kullan\304\261m", 0));
        actionHakk_nda->setText(QApplication::translate("MainWindow", "Hakk\304\261nda", 0));
        actionDurdur->setText(QApplication::translate("MainWindow", "Durdur", 0));
        actionBa_lat->setText(QApplication::translate("MainWindow", "Ba\305\237lat", 0));
        checkBox_4->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "  B\303\274y\303\274k Harf(A-Z)", 0));
        label_7->setText(QApplication::translate("MainWindow", "  \303\226zel Karakterler", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "8", 0)
         << QApplication::translate("MainWindow", "9", 0)
         << QApplication::translate("MainWindow", "10", 0)
        );
        checkBox_2->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "  Son ek", 0));
        label_6->setText(QApplication::translate("MainWindow", "  Say\304\261lar(0-9)", 0));
        label_2->setText(QApplication::translate("MainWindow", "  \303\226n ek", 0));
        label_5->setText(QApplication::translate("MainWindow", "  K\303\274\303\247\303\274k Harf(a-z)", 0));
        checkBox->setText(QString());
        checkBox_3->setText(QString());
        label->setText(QApplication::translate("MainWindow", "  Kelime Uzunlu\304\237u ", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\304\260\305\237lemi Durdur ve\n"
" Program\304\261 Kapat!", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\304\260\305\237lemi Ba\305\237lat", 0));
        label_10->setText(QApplication::translate("MainWindow", "\304\260\305\237lem Durumu  :", 0));
        label_11->setText(QApplication::translate("MainWindow", "L\303\274tfen Kelime Uzunlu\304\237unu Ayarlay\304\261n", 0));
        menuDosya->setTitle(QApplication::translate("MainWindow", "Dosya", 0));
        menuD_zenle->setTitle(QApplication::translate("MainWindow", "D\303\274zenle", 0));
        menuYard_m->setTitle(QApplication::translate("MainWindow", "Yard\304\261m", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
