/********************************************************************************
** Form generated from reading UI file 'calculatrice.ui'
**
** Created: Fri Dec 14 18:30:39 2012
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICE_H
#define UI_CALCULATRICE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculatrice
{
public:
    QAction *actionAboutMe;
    QAction *action_Quit;
    QAction *action_Known_bugs;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QLabel *screen;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *b7;
    QPushButton *b8;
    QPushButton *b9;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *b4;
    QPushButton *b5;
    QPushButton *b6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *b0;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *bMoins;
    QPushButton *bPlus;
    QPushButton *reset;
    QPushButton *bEgual;
    QMenuBar *menuBar;
    QMenu *menu_Fichier;
    QMenu *menuAboutMe;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *calculatrice)
    {
        if (calculatrice->objectName().isEmpty())
            calculatrice->setObjectName(QString::fromUtf8("calculatrice"));
        calculatrice->resize(384, 231);
        actionAboutMe = new QAction(calculatrice);
        actionAboutMe->setObjectName(QString::fromUtf8("actionAboutMe"));
        action_Quit = new QAction(calculatrice);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Known_bugs = new QAction(calculatrice);
        action_Known_bugs->setObjectName(QString::fromUtf8("action_Known_bugs"));
        centralWidget = new QWidget(calculatrice);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        screen = new QLabel(centralWidget);
        screen->setObjectName(QString::fromUtf8("screen"));

        horizontalLayout_5->addWidget(screen);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        b7 = new QPushButton(centralWidget);
        b7->setObjectName(QString::fromUtf8("b7"));

        horizontalLayout->addWidget(b7);

        b8 = new QPushButton(centralWidget);
        b8->setObjectName(QString::fromUtf8("b8"));

        horizontalLayout->addWidget(b8);

        b9 = new QPushButton(centralWidget);
        b9->setObjectName(QString::fromUtf8("b9"));

        horizontalLayout->addWidget(b9);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        b4 = new QPushButton(centralWidget);
        b4->setObjectName(QString::fromUtf8("b4"));

        horizontalLayout_2->addWidget(b4);

        b5 = new QPushButton(centralWidget);
        b5->setObjectName(QString::fromUtf8("b5"));

        horizontalLayout_2->addWidget(b5);

        b6 = new QPushButton(centralWidget);
        b6->setObjectName(QString::fromUtf8("b6"));

        horizontalLayout_2->addWidget(b6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        b1 = new QPushButton(centralWidget);
        b1->setObjectName(QString::fromUtf8("b1"));

        horizontalLayout_3->addWidget(b1);

        b2 = new QPushButton(centralWidget);
        b2->setObjectName(QString::fromUtf8("b2"));

        horizontalLayout_3->addWidget(b2);

        b3 = new QPushButton(centralWidget);
        b3->setObjectName(QString::fromUtf8("b3"));

        horizontalLayout_3->addWidget(b3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        b0 = new QPushButton(centralWidget);
        b0->setObjectName(QString::fromUtf8("b0"));

        horizontalLayout_4->addWidget(b0);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_6->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        bMoins = new QPushButton(centralWidget);
        bMoins->setObjectName(QString::fromUtf8("bMoins"));

        verticalLayout_2->addWidget(bMoins);

        bPlus = new QPushButton(centralWidget);
        bPlus->setObjectName(QString::fromUtf8("bPlus"));

        verticalLayout_2->addWidget(bPlus);

        reset = new QPushButton(centralWidget);
        reset->setObjectName(QString::fromUtf8("reset"));

        verticalLayout_2->addWidget(reset);

        bEgual = new QPushButton(centralWidget);
        bEgual->setObjectName(QString::fromUtf8("bEgual"));

        verticalLayout_2->addWidget(bEgual);


        horizontalLayout_6->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_6);

        calculatrice->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(calculatrice);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 384, 25));
        menu_Fichier = new QMenu(menuBar);
        menu_Fichier->setObjectName(QString::fromUtf8("menu_Fichier"));
        menuAboutMe = new QMenu(menuBar);
        menuAboutMe->setObjectName(QString::fromUtf8("menuAboutMe"));
        calculatrice->setMenuBar(menuBar);
        statusBar = new QStatusBar(calculatrice);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        calculatrice->setStatusBar(statusBar);

        menuBar->addAction(menu_Fichier->menuAction());
        menuBar->addAction(menuAboutMe->menuAction());
        menu_Fichier->addAction(action_Quit);
        menuAboutMe->addAction(actionAboutMe);
        menuAboutMe->addAction(action_Known_bugs);

        retranslateUi(calculatrice);

        QMetaObject::connectSlotsByName(calculatrice);
    } // setupUi

    void retranslateUi(QMainWindow *calculatrice)
    {
        calculatrice->setWindowTitle(QApplication::translate("calculatrice", "calculatrice", 0, QApplication::UnicodeUTF8));
        actionAboutMe->setText(QApplication::translate("calculatrice", "&AboutMe", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("calculatrice", "&Quit", 0, QApplication::UnicodeUTF8));
        action_Known_bugs->setText(QApplication::translate("calculatrice", "&Known bugs", 0, QApplication::UnicodeUTF8));
        screen->setText(QApplication::translate("calculatrice", "0", 0, QApplication::UnicodeUTF8));
        b7->setText(QApplication::translate("calculatrice", "7", 0, QApplication::UnicodeUTF8));
        b8->setText(QApplication::translate("calculatrice", "8", 0, QApplication::UnicodeUTF8));
        b9->setText(QApplication::translate("calculatrice", "9", 0, QApplication::UnicodeUTF8));
        b4->setText(QApplication::translate("calculatrice", "4", 0, QApplication::UnicodeUTF8));
        b5->setText(QApplication::translate("calculatrice", "5", 0, QApplication::UnicodeUTF8));
        b6->setText(QApplication::translate("calculatrice", "6", 0, QApplication::UnicodeUTF8));
        b1->setText(QApplication::translate("calculatrice", "1", 0, QApplication::UnicodeUTF8));
        b2->setText(QApplication::translate("calculatrice", "2", 0, QApplication::UnicodeUTF8));
        b3->setText(QApplication::translate("calculatrice", "3", 0, QApplication::UnicodeUTF8));
        b0->setText(QApplication::translate("calculatrice", "0", 0, QApplication::UnicodeUTF8));
        bMoins->setText(QApplication::translate("calculatrice", "-", 0, QApplication::UnicodeUTF8));
        bPlus->setText(QApplication::translate("calculatrice", "+", 0, QApplication::UnicodeUTF8));
        reset->setText(QApplication::translate("calculatrice", "Reset", 0, QApplication::UnicodeUTF8));
        bEgual->setText(QApplication::translate("calculatrice", "=", 0, QApplication::UnicodeUTF8));
        menu_Fichier->setTitle(QApplication::translate("calculatrice", "&File", 0, QApplication::UnicodeUTF8));
        menuAboutMe->setTitle(QApplication::translate("calculatrice", "More", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class calculatrice: public Ui_calculatrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICE_H
