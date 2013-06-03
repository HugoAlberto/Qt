/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Tue May 21 18:04:09 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *labelImmatriculation;
    QLabel *labelType;
    QLabel *labelCarburant;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditImmatriculation2;
    QLineEdit *lineEditType2;
    QLineEdit *lineEditCarburant2;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelVille;
    QLabel *labelCouleur;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEditMarque2;
    QLineEdit *lineEditCouleur2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        verticalLayout_5 = new QVBoxLayout(Dialog);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelImmatriculation = new QLabel(Dialog);
        labelImmatriculation->setObjectName(QString::fromUtf8("labelImmatriculation"));

        verticalLayout->addWidget(labelImmatriculation);

        labelType = new QLabel(Dialog);
        labelType->setObjectName(QString::fromUtf8("labelType"));

        verticalLayout->addWidget(labelType);

        labelCarburant = new QLabel(Dialog);
        labelCarburant->setObjectName(QString::fromUtf8("labelCarburant"));

        verticalLayout->addWidget(labelCarburant);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditImmatriculation2 = new QLineEdit(Dialog);
        lineEditImmatriculation2->setObjectName(QString::fromUtf8("lineEditImmatriculation2"));

        verticalLayout_2->addWidget(lineEditImmatriculation2);

        lineEditType2 = new QLineEdit(Dialog);
        lineEditType2->setObjectName(QString::fromUtf8("lineEditType2"));

        verticalLayout_2->addWidget(lineEditType2);

        lineEditCarburant2 = new QLineEdit(Dialog);
        lineEditCarburant2->setObjectName(QString::fromUtf8("lineEditCarburant2"));

        verticalLayout_2->addWidget(lineEditCarburant2);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        labelVille = new QLabel(Dialog);
        labelVille->setObjectName(QString::fromUtf8("labelVille"));

        verticalLayout_3->addWidget(labelVille);

        labelCouleur = new QLabel(Dialog);
        labelCouleur->setObjectName(QString::fromUtf8("labelCouleur"));

        verticalLayout_3->addWidget(labelCouleur);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lineEditMarque2 = new QLineEdit(Dialog);
        lineEditMarque2->setObjectName(QString::fromUtf8("lineEditMarque2"));

        verticalLayout_4->addWidget(lineEditMarque2);

        lineEditCouleur2 = new QLineEdit(Dialog);
        lineEditCouleur2->setObjectName(QString::fromUtf8("lineEditCouleur2"));

        verticalLayout_4->addWidget(lineEditCouleur2);


        gridLayout->addLayout(verticalLayout_4, 0, 3, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setEnabled(true);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_5->addWidget(buttonBox);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Ajouter une voiture", 0, QApplication::UnicodeUTF8));
        labelImmatriculation->setText(QApplication::translate("Dialog", "Immatriculation :", 0, QApplication::UnicodeUTF8));
        labelType->setText(QApplication::translate("Dialog", "Type / model :", 0, QApplication::UnicodeUTF8));
        labelCarburant->setText(QApplication::translate("Dialog", "Carburant :", 0, QApplication::UnicodeUTF8));
        labelVille->setText(QApplication::translate("Dialog", "Marque :", 0, QApplication::UnicodeUTF8));
        labelCouleur->setText(QApplication::translate("Dialog", "Couleur :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
