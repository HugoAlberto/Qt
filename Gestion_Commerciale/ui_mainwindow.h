/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue May 21 18:30:29 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quitter;
    QAction *action_propos;
    QAction *actionActualiser_le_Catalogue;
    QAction *actionActualiser_les_C_lients;
    QAction *on_actionActualiser_le_Catalogue;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabCatalogue;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QTableView *tableViewCatalogue;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonAjoutPiece;
    QPushButton *pushButtonSupprPiece;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tabCommande;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxVehicule;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelGestionDesCommandes;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout;
    QLabel *labelImmatriculation;
    QLineEdit *lineEditImmatriculation;
    QLabel *labelMarque;
    QLineEdit *lineEditMarque;
    QLabel *labelType;
    QLineEdit *lineEditType;
    QLabel *labelCouleur;
    QLineEdit *lineEditCouleur;
    QLabel *labelCarburant;
    QLineEdit *lineEditCarburant;
    QPushButton *pushButtonAjoutVehicule;
    QTableView *tableViewVehicule;
    QFrame *line_2;
    QGroupBox *groupBoxCommande;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelPiece;
    QComboBox *comboBoxDesignationPiece;
    QLabel *labelReparation;
    QSpinBox *spinBoxHMO;
    QSpacerItem *horizontalSpacer_7;
    QLabel *labelQuantite;
    QSpinBox *spinBoxQuantite;
    QPushButton *pushButtonAjoutPiece_2;
    QFrame *line;
    QGroupBox *groupBoxPanier;
    QHBoxLayout *horizontalLayout_6;
    QTableWidget *tableWidgetPanier;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelMontant;
    QLabel *labelMontantTotal;
    QMenuBar *menuBar;
    QMenu *menu_Fichier;
    QMenu *menu_Ev_nements;
    QMenu *menu_Aide;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(641, 716);
        action_Quitter = new QAction(MainWindow);
        action_Quitter->setObjectName(QString::fromUtf8("action_Quitter"));
        action_propos = new QAction(MainWindow);
        action_propos->setObjectName(QString::fromUtf8("action_propos"));
        actionActualiser_le_Catalogue = new QAction(MainWindow);
        actionActualiser_le_Catalogue->setObjectName(QString::fromUtf8("actionActualiser_le_Catalogue"));
        actionActualiser_les_C_lients = new QAction(MainWindow);
        actionActualiser_les_C_lients->setObjectName(QString::fromUtf8("actionActualiser_les_C_lients"));
        on_actionActualiser_le_Catalogue = new QAction(MainWindow);
        on_actionActualiser_le_Catalogue->setObjectName(QString::fromUtf8("on_actionActualiser_le_Catalogue"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabCatalogue = new QWidget();
        tabCatalogue->setObjectName(QString::fromUtf8("tabCatalogue"));
        verticalLayout_2 = new QVBoxLayout(tabCatalogue);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label = new QLabel(tabCatalogue);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tableViewCatalogue = new QTableView(tabCatalogue);
        tableViewCatalogue->setObjectName(QString::fromUtf8("tableViewCatalogue"));
        tableViewCatalogue->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewCatalogue->horizontalHeader()->setCascadingSectionResizes(false);
        tableViewCatalogue->horizontalHeader()->setDefaultSectionSize(100);

        verticalLayout_2->addWidget(tableViewCatalogue);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonAjoutPiece = new QPushButton(tabCatalogue);
        pushButtonAjoutPiece->setObjectName(QString::fromUtf8("pushButtonAjoutPiece"));
        pushButtonAjoutPiece->setCheckable(false);

        horizontalLayout->addWidget(pushButtonAjoutPiece);

        pushButtonSupprPiece = new QPushButton(tabCatalogue);
        pushButtonSupprPiece->setObjectName(QString::fromUtf8("pushButtonSupprPiece"));

        horizontalLayout->addWidget(pushButtonSupprPiece);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        tabWidget->addTab(tabCatalogue, QString());
        tabCommande = new QWidget();
        tabCommande->setObjectName(QString::fromUtf8("tabCommande"));
        verticalLayout_3 = new QVBoxLayout(tabCommande);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBoxVehicule = new QGroupBox(tabCommande);
        groupBoxVehicule->setObjectName(QString::fromUtf8("groupBoxVehicule"));
        verticalLayout_4 = new QVBoxLayout(groupBoxVehicule);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        labelGestionDesCommandes = new QLabel(groupBoxVehicule);
        labelGestionDesCommandes->setObjectName(QString::fromUtf8("labelGestionDesCommandes"));

        horizontalLayout_3->addWidget(labelGestionDesCommandes);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelImmatriculation = new QLabel(groupBoxVehicule);
        labelImmatriculation->setObjectName(QString::fromUtf8("labelImmatriculation"));

        gridLayout->addWidget(labelImmatriculation, 0, 0, 1, 1);

        lineEditImmatriculation = new QLineEdit(groupBoxVehicule);
        lineEditImmatriculation->setObjectName(QString::fromUtf8("lineEditImmatriculation"));

        gridLayout->addWidget(lineEditImmatriculation, 0, 1, 1, 1);

        labelMarque = new QLabel(groupBoxVehicule);
        labelMarque->setObjectName(QString::fromUtf8("labelMarque"));

        gridLayout->addWidget(labelMarque, 0, 2, 1, 1);

        lineEditMarque = new QLineEdit(groupBoxVehicule);
        lineEditMarque->setObjectName(QString::fromUtf8("lineEditMarque"));

        gridLayout->addWidget(lineEditMarque, 0, 3, 1, 1);

        labelType = new QLabel(groupBoxVehicule);
        labelType->setObjectName(QString::fromUtf8("labelType"));

        gridLayout->addWidget(labelType, 1, 0, 1, 1);

        lineEditType = new QLineEdit(groupBoxVehicule);
        lineEditType->setObjectName(QString::fromUtf8("lineEditType"));

        gridLayout->addWidget(lineEditType, 1, 1, 1, 1);

        labelCouleur = new QLabel(groupBoxVehicule);
        labelCouleur->setObjectName(QString::fromUtf8("labelCouleur"));

        gridLayout->addWidget(labelCouleur, 1, 2, 1, 1);

        lineEditCouleur = new QLineEdit(groupBoxVehicule);
        lineEditCouleur->setObjectName(QString::fromUtf8("lineEditCouleur"));

        gridLayout->addWidget(lineEditCouleur, 1, 3, 1, 1);

        labelCarburant = new QLabel(groupBoxVehicule);
        labelCarburant->setObjectName(QString::fromUtf8("labelCarburant"));

        gridLayout->addWidget(labelCarburant, 2, 0, 1, 1);

        lineEditCarburant = new QLineEdit(groupBoxVehicule);
        lineEditCarburant->setObjectName(QString::fromUtf8("lineEditCarburant"));

        gridLayout->addWidget(lineEditCarburant, 2, 1, 1, 1);

        pushButtonAjoutVehicule = new QPushButton(groupBoxVehicule);
        pushButtonAjoutVehicule->setObjectName(QString::fromUtf8("pushButtonAjoutVehicule"));

        gridLayout->addWidget(pushButtonAjoutVehicule, 2, 3, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        tableViewVehicule = new QTableView(groupBoxVehicule);
        tableViewVehicule->setObjectName(QString::fromUtf8("tableViewVehicule"));
        tableViewVehicule->horizontalHeader()->setDefaultSectionSize(105);

        verticalLayout_4->addWidget(tableViewVehicule);


        verticalLayout_3->addWidget(groupBoxVehicule);

        line_2 = new QFrame(tabCommande);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        groupBoxCommande = new QGroupBox(tabCommande);
        groupBoxCommande->setObjectName(QString::fromUtf8("groupBoxCommande"));
        horizontalLayout_4 = new QHBoxLayout(groupBoxCommande);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelPiece = new QLabel(groupBoxCommande);
        labelPiece->setObjectName(QString::fromUtf8("labelPiece"));

        horizontalLayout_4->addWidget(labelPiece);

        comboBoxDesignationPiece = new QComboBox(groupBoxCommande);
        comboBoxDesignationPiece->setObjectName(QString::fromUtf8("comboBoxDesignationPiece"));

        horizontalLayout_4->addWidget(comboBoxDesignationPiece);

        labelReparation = new QLabel(groupBoxCommande);
        labelReparation->setObjectName(QString::fromUtf8("labelReparation"));

        horizontalLayout_4->addWidget(labelReparation);

        spinBoxHMO = new QSpinBox(groupBoxCommande);
        spinBoxHMO->setObjectName(QString::fromUtf8("spinBoxHMO"));

        horizontalLayout_4->addWidget(spinBoxHMO);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        labelQuantite = new QLabel(groupBoxCommande);
        labelQuantite->setObjectName(QString::fromUtf8("labelQuantite"));

        horizontalLayout_4->addWidget(labelQuantite);

        spinBoxQuantite = new QSpinBox(groupBoxCommande);
        spinBoxQuantite->setObjectName(QString::fromUtf8("spinBoxQuantite"));

        horizontalLayout_4->addWidget(spinBoxQuantite);

        pushButtonAjoutPiece_2 = new QPushButton(groupBoxCommande);
        pushButtonAjoutPiece_2->setObjectName(QString::fromUtf8("pushButtonAjoutPiece_2"));

        horizontalLayout_4->addWidget(pushButtonAjoutPiece_2);


        verticalLayout_3->addWidget(groupBoxCommande);

        line = new QFrame(tabCommande);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        groupBoxPanier = new QGroupBox(tabCommande);
        groupBoxPanier->setObjectName(QString::fromUtf8("groupBoxPanier"));
        horizontalLayout_6 = new QHBoxLayout(groupBoxPanier);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        tableWidgetPanier = new QTableWidget(groupBoxPanier);
        if (tableWidgetPanier->columnCount() < 4)
            tableWidgetPanier->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetPanier->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetPanier->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetPanier->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetPanier->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetPanier->setObjectName(QString::fromUtf8("tableWidgetPanier"));
        tableWidgetPanier->setEnabled(true);
        tableWidgetPanier->horizontalHeader()->setDefaultSectionSize(100);

        horizontalLayout_6->addWidget(tableWidgetPanier);

        horizontalSpacer_8 = new QSpacerItem(48, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelMontant = new QLabel(groupBoxPanier);
        labelMontant->setObjectName(QString::fromUtf8("labelMontant"));

        horizontalLayout_5->addWidget(labelMontant);

        labelMontantTotal = new QLabel(groupBoxPanier);
        labelMontantTotal->setObjectName(QString::fromUtf8("labelMontantTotal"));

        horizontalLayout_5->addWidget(labelMontantTotal);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_3->addWidget(groupBoxPanier);

        tabWidget->addTab(tabCommande, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 641, 25));
        menu_Fichier = new QMenu(menuBar);
        menu_Fichier->setObjectName(QString::fromUtf8("menu_Fichier"));
        menu_Ev_nements = new QMenu(menuBar);
        menu_Ev_nements->setObjectName(QString::fromUtf8("menu_Ev_nements"));
        menu_Aide = new QMenu(menuBar);
        menu_Aide->setObjectName(QString::fromUtf8("menu_Aide"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Fichier->menuAction());
        menuBar->addAction(menu_Ev_nements->menuAction());
        menuBar->addAction(menu_Aide->menuAction());
        menu_Fichier->addAction(action_Quitter);
        menu_Ev_nements->addAction(on_actionActualiser_le_Catalogue);
        menu_Aide->addAction(action_propos);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion commerciale", 0, QApplication::UnicodeUTF8));
        action_Quitter->setText(QApplication::translate("MainWindow", "&Quitter", 0, QApplication::UnicodeUTF8));
        action_propos->setText(QApplication::translate("MainWindow", "\303\200 &propos", 0, QApplication::UnicodeUTF8));
        actionActualiser_le_Catalogue->setText(QApplication::translate("MainWindow", "Actualiser le C&atalogue", 0, QApplication::UnicodeUTF8));
        actionActualiser_les_C_lients->setText(QApplication::translate("MainWindow", "Actualiser les C&lients", 0, QApplication::UnicodeUTF8));
        on_actionActualiser_le_Catalogue->setText(QApplication::translate("MainWindow", "&Rafrechir le catalogue", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Catalogue des pieces vehicule", 0, QApplication::UnicodeUTF8));
        pushButtonAjoutPiece->setText(QApplication::translate("MainWindow", "Ajouter", 0, QApplication::UnicodeUTF8));
        pushButtonSupprPiece->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabCatalogue), QApplication::translate("MainWindow", "Catalogue", 0, QApplication::UnicodeUTF8));
        groupBoxVehicule->setTitle(QApplication::translate("MainWindow", "Vehicule", 0, QApplication::UnicodeUTF8));
        labelGestionDesCommandes->setText(QApplication::translate("MainWindow", "Gestion des vehicules", 0, QApplication::UnicodeUTF8));
        labelImmatriculation->setText(QApplication::translate("MainWindow", "Immatriculation : ", 0, QApplication::UnicodeUTF8));
        labelMarque->setText(QApplication::translate("MainWindow", "Marque : ", 0, QApplication::UnicodeUTF8));
        labelType->setText(QApplication::translate("MainWindow", "Type : ", 0, QApplication::UnicodeUTF8));
        labelCouleur->setText(QApplication::translate("MainWindow", "Couleur :", 0, QApplication::UnicodeUTF8));
        labelCarburant->setText(QApplication::translate("MainWindow", "Carburant : ", 0, QApplication::UnicodeUTF8));
        pushButtonAjoutVehicule->setText(QApplication::translate("MainWindow", "Ajout d'un nouveau vehicule", 0, QApplication::UnicodeUTF8));
        groupBoxCommande->setTitle(QApplication::translate("MainWindow", "Produit", 0, QApplication::UnicodeUTF8));
        labelPiece->setText(QApplication::translate("MainWindow", "Piece :", 0, QApplication::UnicodeUTF8));
        labelReparation->setText(QApplication::translate("MainWindow", "Heure main oeuvre : ", 0, QApplication::UnicodeUTF8));
        labelQuantite->setText(QApplication::translate("MainWindow", "Quantit\303\251 :", 0, QApplication::UnicodeUTF8));
        pushButtonAjoutPiece_2->setText(QApplication::translate("MainWindow", "&Ajouter", 0, QApplication::UnicodeUTF8));
        groupBoxPanier->setTitle(QApplication::translate("MainWindow", "Visulalisation", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetPanier->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Code Piece", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetPanier->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Main d'oeuvre", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetPanier->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Prix unitaire", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetPanier->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Quantit\303\251", 0, QApplication::UnicodeUTF8));
        labelMontant->setText(QApplication::translate("MainWindow", "Montant Total :", 0, QApplication::UnicodeUTF8));
        labelMontantTotal->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabCommande), QApplication::translate("MainWindow", "Vehicules", 0, QApplication::UnicodeUTF8));
        menu_Fichier->setTitle(QApplication::translate("MainWindow", "&Fichier", 0, QApplication::UnicodeUTF8));
        menu_Ev_nements->setTitle(QApplication::translate("MainWindow", "&Ev\303\250nements", 0, QApplication::UnicodeUTF8));
        menu_Aide->setTitle(QApplication::translate("MainWindow", "&Aide", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
