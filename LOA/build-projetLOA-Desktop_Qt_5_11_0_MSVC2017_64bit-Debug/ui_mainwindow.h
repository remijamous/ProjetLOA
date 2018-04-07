/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionInventoryHubQuickAccess;
    QAction *actionMainMenuQuickAccess;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QFrame *QuickAccessMenuSeparator;
    QStackedWidget *MainActionArea;
    QWidget *MainMenu;
    QVBoxLayout *verticalLayout_2;
    QLabel *Title;
    QWidget *MainMenuButtons;
    QHBoxLayout *horizontalLayout;
    QPushButton *BorrowItemButton;
    QPushButton *ReturnItemButton;
    QPushButton *CreateNewUserButton;
    QWidget *InventoryHub;
    QVBoxLayout *verticalLayout;
    QWidget *TopSide;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *TopSideLayout;
    QTableView *BookTableView;
    QHBoxLayout *ItemButtons;
    QPushButton *CreateItemButton;
    QPushButton *RemoveItemButton;
    QFrame *InventorHubSeparator;
    QWidget *BottomSide;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *BottomSideLayout;
    QVBoxLayout *LeftSideLayout;
    QFrame *ResearchFilters;
    QVBoxLayout *verticalLayout_4;
    QLabel *ResearchAreaTitle;
    QLineEdit *ResearchField;
    QGridLayout *ResearchFiltersGrid;
    QCheckBox *BookRCheckbox;
    QCheckBox *DVDRCheckbox;
    QCheckBox *checkBox;
    QVBoxLayout *RightSideLayout;
    QVBoxLayout *CalendarArea;
    QCalendarWidget *Calendar;
    QHBoxLayout *ReservationEndArea;
    QLabel *ReservationDateLabel;
    QDateTimeEdit *ReservationDate;
    QHBoxLayout *ReservationBeginArea;
    QLabel *ReservationEndDateLabel;
    QDateTimeEdit *ReservationEndDate;
    QPushButton *MakeReservation;
    QMenuBar *menuBar;
    QMenu *menuOptions_2;
    QMenu *menuA_propos;
    QStatusBar *statusBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1061, 628);
        actionInventoryHubQuickAccess = new QAction(MainWindow);
        actionInventoryHubQuickAccess->setObjectName(QStringLiteral("actionInventoryHubQuickAccess"));
        actionMainMenuQuickAccess = new QAction(MainWindow);
        actionMainMenuQuickAccess->setObjectName(QStringLiteral("actionMainMenuQuickAccess"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        QuickAccessMenuSeparator = new QFrame(centralWidget);
        QuickAccessMenuSeparator->setObjectName(QStringLiteral("QuickAccessMenuSeparator"));
        QuickAccessMenuSeparator->setFrameShadow(QFrame::Sunken);
        QuickAccessMenuSeparator->setLineWidth(5);
        QuickAccessMenuSeparator->setMidLineWidth(5);
        QuickAccessMenuSeparator->setFrameShape(QFrame::VLine);

        horizontalLayout_2->addWidget(QuickAccessMenuSeparator);

        MainActionArea = new QStackedWidget(centralWidget);
        MainActionArea->setObjectName(QStringLiteral("MainActionArea"));
        MainMenu = new QWidget();
        MainMenu->setObjectName(QStringLiteral("MainMenu"));
        verticalLayout_2 = new QVBoxLayout(MainMenu);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Title = new QLabel(MainMenu);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setTextFormat(Qt::AutoText);
        Title->setScaledContents(false);
        Title->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Title);

        MainMenuButtons = new QWidget(MainMenu);
        MainMenuButtons->setObjectName(QStringLiteral("MainMenuButtons"));
        horizontalLayout = new QHBoxLayout(MainMenuButtons);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        BorrowItemButton = new QPushButton(MainMenuButtons);
        BorrowItemButton->setObjectName(QStringLiteral("BorrowItemButton"));
        BorrowItemButton->setEnabled(false);

        horizontalLayout->addWidget(BorrowItemButton);

        ReturnItemButton = new QPushButton(MainMenuButtons);
        ReturnItemButton->setObjectName(QStringLiteral("ReturnItemButton"));
        ReturnItemButton->setEnabled(false);

        horizontalLayout->addWidget(ReturnItemButton);

        CreateNewUserButton = new QPushButton(MainMenuButtons);
        CreateNewUserButton->setObjectName(QStringLiteral("CreateNewUserButton"));
        CreateNewUserButton->setEnabled(false);

        horizontalLayout->addWidget(CreateNewUserButton);


        verticalLayout_2->addWidget(MainMenuButtons);

        MainActionArea->addWidget(MainMenu);
        InventoryHub = new QWidget();
        InventoryHub->setObjectName(QStringLiteral("InventoryHub"));
        verticalLayout = new QVBoxLayout(InventoryHub);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        TopSide = new QWidget(InventoryHub);
        TopSide->setObjectName(QStringLiteral("TopSide"));
        TopSide->setMinimumSize(QSize(0, 275));
        horizontalLayout_3 = new QHBoxLayout(TopSide);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        TopSideLayout = new QVBoxLayout();
        TopSideLayout->setSpacing(6);
        TopSideLayout->setObjectName(QStringLiteral("TopSideLayout"));
        BookTableView = new QTableView(TopSide);
        BookTableView->setObjectName(QStringLiteral("BookTableView"));
        BookTableView->setMinimumSize(QSize(0, 250));

        TopSideLayout->addWidget(BookTableView);

        ItemButtons = new QHBoxLayout();
        ItemButtons->setSpacing(10);
        ItemButtons->setObjectName(QStringLiteral("ItemButtons"));
        CreateItemButton = new QPushButton(TopSide);
        CreateItemButton->setObjectName(QStringLiteral("CreateItemButton"));
        CreateItemButton->setEnabled(false);
        CreateItemButton->setMinimumSize(QSize(0, 25));

        ItemButtons->addWidget(CreateItemButton);

        RemoveItemButton = new QPushButton(TopSide);
        RemoveItemButton->setObjectName(QStringLiteral("RemoveItemButton"));
        RemoveItemButton->setEnabled(false);
        RemoveItemButton->setMinimumSize(QSize(0, 25));

        ItemButtons->addWidget(RemoveItemButton);


        TopSideLayout->addLayout(ItemButtons);


        horizontalLayout_3->addLayout(TopSideLayout);


        verticalLayout->addWidget(TopSide);

        InventorHubSeparator = new QFrame(InventoryHub);
        InventorHubSeparator->setObjectName(QStringLiteral("InventorHubSeparator"));
        InventorHubSeparator->setFrameShadow(QFrame::Raised);
        InventorHubSeparator->setLineWidth(4);
        InventorHubSeparator->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(InventorHubSeparator);

        BottomSide = new QWidget(InventoryHub);
        BottomSide->setObjectName(QStringLiteral("BottomSide"));
        horizontalLayout_5 = new QHBoxLayout(BottomSide);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, -1);
        BottomSideLayout = new QHBoxLayout();
        BottomSideLayout->setSpacing(6);
        BottomSideLayout->setObjectName(QStringLiteral("BottomSideLayout"));
        LeftSideLayout = new QVBoxLayout();
        LeftSideLayout->setSpacing(6);
        LeftSideLayout->setObjectName(QStringLiteral("LeftSideLayout"));
        ResearchFilters = new QFrame(BottomSide);
        ResearchFilters->setObjectName(QStringLiteral("ResearchFilters"));
        ResearchFilters->setMinimumSize(QSize(0, 0));
        ResearchFilters->setFrameShape(QFrame::StyledPanel);
        ResearchFilters->setFrameShadow(QFrame::Raised);
        ResearchFilters->setLineWidth(20);
        ResearchFilters->setMidLineWidth(20);
        verticalLayout_4 = new QVBoxLayout(ResearchFilters);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        ResearchAreaTitle = new QLabel(ResearchFilters);
        ResearchAreaTitle->setObjectName(QStringLiteral("ResearchAreaTitle"));
        ResearchAreaTitle->setEnabled(true);
        ResearchAreaTitle->setMaximumSize(QSize(16777215, 25));
        ResearchAreaTitle->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_4->addWidget(ResearchAreaTitle);

        ResearchField = new QLineEdit(ResearchFilters);
        ResearchField->setObjectName(QStringLiteral("ResearchField"));
        ResearchField->setEnabled(false);

        verticalLayout_4->addWidget(ResearchField);

        ResearchFiltersGrid = new QGridLayout();
        ResearchFiltersGrid->setSpacing(6);
        ResearchFiltersGrid->setObjectName(QStringLiteral("ResearchFiltersGrid"));
        BookRCheckbox = new QCheckBox(ResearchFilters);
        BookRCheckbox->setObjectName(QStringLiteral("BookRCheckbox"));
        BookRCheckbox->setEnabled(false);
        BookRCheckbox->setTristate(false);

        ResearchFiltersGrid->addWidget(BookRCheckbox, 0, 0, 1, 1);

        DVDRCheckbox = new QCheckBox(ResearchFilters);
        DVDRCheckbox->setObjectName(QStringLiteral("DVDRCheckbox"));
        DVDRCheckbox->setEnabled(false);

        ResearchFiltersGrid->addWidget(DVDRCheckbox, 1, 0, 1, 1);

        checkBox = new QCheckBox(ResearchFilters);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setEnabled(false);

        ResearchFiltersGrid->addWidget(checkBox, 2, 0, 1, 1);


        verticalLayout_4->addLayout(ResearchFiltersGrid);


        LeftSideLayout->addWidget(ResearchFilters);


        BottomSideLayout->addLayout(LeftSideLayout);

        RightSideLayout = new QVBoxLayout();
        RightSideLayout->setSpacing(8);
        RightSideLayout->setObjectName(QStringLiteral("RightSideLayout"));
        CalendarArea = new QVBoxLayout();
        CalendarArea->setSpacing(6);
        CalendarArea->setObjectName(QStringLiteral("CalendarArea"));
        Calendar = new QCalendarWidget(BottomSide);
        Calendar->setObjectName(QStringLiteral("Calendar"));

        CalendarArea->addWidget(Calendar);

        ReservationEndArea = new QHBoxLayout();
        ReservationEndArea->setSpacing(6);
        ReservationEndArea->setObjectName(QStringLiteral("ReservationEndArea"));
        ReservationDateLabel = new QLabel(BottomSide);
        ReservationDateLabel->setObjectName(QStringLiteral("ReservationDateLabel"));
        ReservationDateLabel->setAlignment(Qt::AlignCenter);

        ReservationEndArea->addWidget(ReservationDateLabel);

        ReservationDate = new QDateTimeEdit(BottomSide);
        ReservationDate->setObjectName(QStringLiteral("ReservationDate"));
        ReservationDate->setEnabled(false);

        ReservationEndArea->addWidget(ReservationDate);


        CalendarArea->addLayout(ReservationEndArea);

        ReservationBeginArea = new QHBoxLayout();
        ReservationBeginArea->setSpacing(6);
        ReservationBeginArea->setObjectName(QStringLiteral("ReservationBeginArea"));
        ReservationEndDateLabel = new QLabel(BottomSide);
        ReservationEndDateLabel->setObjectName(QStringLiteral("ReservationEndDateLabel"));
        ReservationEndDateLabel->setAlignment(Qt::AlignCenter);

        ReservationBeginArea->addWidget(ReservationEndDateLabel);

        ReservationEndDate = new QDateTimeEdit(BottomSide);
        ReservationEndDate->setObjectName(QStringLiteral("ReservationEndDate"));
        ReservationEndDate->setEnabled(false);

        ReservationBeginArea->addWidget(ReservationEndDate);


        CalendarArea->addLayout(ReservationBeginArea);

        MakeReservation = new QPushButton(BottomSide);
        MakeReservation->setObjectName(QStringLiteral("MakeReservation"));
        MakeReservation->setEnabled(false);

        CalendarArea->addWidget(MakeReservation);


        RightSideLayout->addLayout(CalendarArea);


        BottomSideLayout->addLayout(RightSideLayout);


        horizontalLayout_5->addLayout(BottomSideLayout);


        verticalLayout->addWidget(BottomSide);

        MainActionArea->addWidget(InventoryHub);

        horizontalLayout_2->addWidget(MainActionArea);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1061, 20));
        menuOptions_2 = new QMenu(menuBar);
        menuOptions_2->setObjectName(QStringLiteral("menuOptions_2"));
        menuA_propos = new QMenu(menuBar);
        menuA_propos->setObjectName(QStringLiteral("menuA_propos"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar_2);

        menuBar->addAction(menuOptions_2->menuAction());
        menuBar->addAction(menuA_propos->menuAction());
        toolBar_2->addAction(actionMainMenuQuickAccess);
        toolBar_2->addAction(actionInventoryHubQuickAccess);

        retranslateUi(MainWindow);

        MainActionArea->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionInventoryHubQuickAccess->setText(QApplication::translate("MainWindow", "InventoryHubQuickAccess", nullptr));
        actionMainMenuQuickAccess->setText(QApplication::translate("MainWindow", "MainMenuQuickAccess", nullptr));
        Title->setText(QApplication::translate("MainWindow", "Manager d'emprunts\n"
"version 1.0", nullptr));
        BorrowItemButton->setText(QApplication::translate("MainWindow", "Faire un emprunt...", nullptr));
        ReturnItemButton->setText(QApplication::translate("MainWindow", "Rendre un emprunt...", nullptr));
        CreateNewUserButton->setText(QApplication::translate("MainWindow", "Nouvel utilisateur", nullptr));
        CreateItemButton->setText(QApplication::translate("MainWindow", "Nouvel objet", nullptr));
        RemoveItemButton->setText(QApplication::translate("MainWindow", "Supprimer objet", nullptr));
        ResearchAreaTitle->setText(QApplication::translate("MainWindow", "Zone de recherche", nullptr));
        ResearchField->setPlaceholderText(QApplication::translate("MainWindow", "Rechercher...", nullptr));
        BookRCheckbox->setText(QApplication::translate("MainWindow", "Books", nullptr));
        DVDRCheckbox->setText(QApplication::translate("MainWindow", "DVD", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "CD", nullptr));
        ReservationDateLabel->setText(QApplication::translate("MainWindow", "Date d'emprunt", nullptr));
        ReservationEndDateLabel->setText(QApplication::translate("MainWindow", "Date de retour", nullptr));
        MakeReservation->setText(QApplication::translate("MainWindow", "Faire une r\303\251servation", nullptr));
        menuOptions_2->setTitle(QApplication::translate("MainWindow", "Options", nullptr));
        menuA_propos->setTitle(QApplication::translate("MainWindow", "A propos...", nullptr));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
