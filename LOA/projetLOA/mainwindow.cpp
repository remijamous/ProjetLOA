#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QString>
#include "book.h"
#include "user.h"
#include "artist.h"

/* MAIN WINDOW INITIALISATION AND DESTROYER */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* DEBUG SECTION */
}

MainWindow::~MainWindow()
{
    delete ui;
}


/* LEFT DOCK FUNCTIONS */
void MainWindow::on_InventoryHubQuickAccess_clicked()
{
    ui->MainActionArea->setCurrentIndex(1);
}

void MainWindow::on_MainMenuQuickAccess_clicked()
{
    ui->MainActionArea->setCurrentIndex(0);
}

/* Inventory Hub Functions */
