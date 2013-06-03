/********************************************************************************
** Form generated from reading UI file 'loto.ui'
**
** Created: Tue May 21 18:33:02 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOTO_H
#define UI_LOTO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loto
{
public:
    QAction *action_Quit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QListWidget *listWidgetNombres;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_2;
    QProgressBar *progressBarMelange;
    QPushButton *pushButton_Tirage;
    QSpacerItem *verticalSpacer_3;
    QSpinBox *spinBoxTirage;
    QPushButton *pushButtonTirer;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTableWidget *tableWidgetAnalyse;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QTableWidget *tableWidgetTirage;
    QMenuBar *menuBar;
    QMenu *menu_Files;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *loto)
    {
        if (loto->objectName().isEmpty())
            loto->setObjectName(QString::fromUtf8("loto"));
        loto->resize(600, 507);
        action_Quit = new QAction(loto);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        centralWidget = new QWidget(loto);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        listWidgetNombres = new QListWidget(centralWidget);
        listWidgetNombres->setObjectName(QString::fromUtf8("listWidgetNombres"));

        verticalLayout_3->addWidget(listWidgetNombres);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(158, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        progressBarMelange = new QProgressBar(centralWidget);
        progressBarMelange->setObjectName(QString::fromUtf8("progressBarMelange"));
        progressBarMelange->setMaximum(500);
        progressBarMelange->setValue(0);

        verticalLayout_2->addWidget(progressBarMelange);

        pushButton_Tirage = new QPushButton(centralWidget);
        pushButton_Tirage->setObjectName(QString::fromUtf8("pushButton_Tirage"));

        verticalLayout_2->addWidget(pushButton_Tirage);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        spinBoxTirage = new QSpinBox(centralWidget);
        spinBoxTirage->setObjectName(QString::fromUtf8("spinBoxTirage"));
        spinBoxTirage->setEnabled(false);
        spinBoxTirage->setMinimum(2);
        spinBoxTirage->setMaximum(500);
        spinBoxTirage->setValue(100);

        verticalLayout_2->addWidget(spinBoxTirage);

        pushButtonTirer = new QPushButton(centralWidget);
        pushButtonTirer->setObjectName(QString::fromUtf8("pushButtonTirer"));
        pushButtonTirer->setEnabled(false);

        verticalLayout_2->addWidget(pushButtonTirer);

        verticalSpacer = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        tableWidgetAnalyse = new QTableWidget(centralWidget);
        if (tableWidgetAnalyse->columnCount() < 2)
            tableWidgetAnalyse->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetAnalyse->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetAnalyse->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidgetAnalyse->setObjectName(QString::fromUtf8("tableWidgetAnalyse"));

        verticalLayout->addWidget(tableWidgetAnalyse);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_5->addLayout(horizontalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        tableWidgetTirage = new QTableWidget(centralWidget);
        if (tableWidgetTirage->columnCount() < 5)
            tableWidgetTirage->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetTirage->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetTirage->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetTirage->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetTirage->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetTirage->setHorizontalHeaderItem(4, __qtablewidgetitem6);
        tableWidgetTirage->setObjectName(QString::fromUtf8("tableWidgetTirage"));

        verticalLayout_4->addWidget(tableWidgetTirage);


        verticalLayout_5->addLayout(verticalLayout_4);

        loto->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(loto);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 25));
        menu_Files = new QMenu(menuBar);
        menu_Files->setObjectName(QString::fromUtf8("menu_Files"));
        loto->setMenuBar(menuBar);
        statusBar = new QStatusBar(loto);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        loto->setStatusBar(statusBar);

        menuBar->addAction(menu_Files->menuAction());
        menu_Files->addAction(action_Quit);

        retranslateUi(loto);

        QMetaObject::connectSlotsByName(loto);
    } // setupUi

    void retranslateUi(QMainWindow *loto)
    {
        loto->setWindowTitle(QApplication::translate("loto", "loto", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("loto", "&Quit", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("loto", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Les nombres :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("loto", "M\303\251langer la boule", 0, QApplication::UnicodeUTF8));
        pushButton_Tirage->setText(QApplication::translate("loto", "1  Tirage", 0, QApplication::UnicodeUTF8));
        pushButtonTirer->setText(QApplication::translate("loto", "Tirer", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("loto", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">L'annalyse des tirages :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetAnalyse->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("loto", "Num\303\251ro", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetAnalyse->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("loto", "Fr\303\251quence", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("loto", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Le tirage :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetTirage->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("loto", "N\302\2601", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetTirage->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("loto", "N\302\2602", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetTirage->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("loto", "N\302\2603", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetTirage->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("loto", "N\302\2604", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetTirage->horizontalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("loto", "N\302\2605", 0, QApplication::UnicodeUTF8));
        menu_Files->setTitle(QApplication::translate("loto", "&Files", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class loto: public Ui_loto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOTO_H
