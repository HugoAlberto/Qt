/********************************************************************************
** Form generated from reading UI file 'newdialog2.ui'
**
** Created: Fri Dec 14 18:30:07 2012
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWDIALOG2_H
#define UI_NEWDIALOG2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewDialog2
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewDialog2)
    {
        if (NewDialog2->objectName().isEmpty())
            NewDialog2->setObjectName(QString::fromUtf8("NewDialog2"));
        NewDialog2->resize(264, 158);
        verticalLayout = new QVBoxLayout(NewDialog2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(NewDialog2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(NewDialog2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(NewDialog2);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NewDialog2);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewDialog2, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewDialog2, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewDialog2);
    } // setupUi

    void retranslateUi(QDialog *NewDialog2)
    {
        NewDialog2->setWindowTitle(QApplication::translate("NewDialog2", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NewDialog2", "Known bugs :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NewDialog2", "Appuyer sur un chiffre puis sur \303\251gual\n"
"ne provoquera pas le r\303\251sultat attendu.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewDialog2: public Ui_NewDialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWDIALOG2_H
