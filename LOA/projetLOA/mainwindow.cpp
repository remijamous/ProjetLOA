#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QString>
#include "book.h"
#include "user.h"
#include "artist.h"
#include "person.h"
#include "datamanager.h"

/* MAIN WINDOW INITIALISATION AND DESTROYER */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    DataManager database = DataManager();
    database.constructBookDatabaseMockUp();
    qDebug() << database.getBookDataBase().value(1).getName();
}

MainWindow::~MainWindow()
{
    delete ui;
}


/* LEFT DOCK FUNCTIONS */

void MainWindow::on_actionMainMenuQuickAccess_triggered()
{
    ui->MainActionArea->setCurrentIndex(0);
}

void MainWindow::on_actionInventoryHubQuickAccess_triggered()
{
    ui->MainActionArea->setCurrentIndex(1);
}

/* Inventory Hub Functions */

