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

    // Initialize all the data needed.
    database.constructBookDatabaseMockUp();
    fillInventoryHubTableView();
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


void MainWindow::fillInventoryHubTableView() {
    // InventoryHub Tableview
    int databaseSize = database.getBookDataBase().size();
    inventoryBookModel = new QStandardItemModel(databaseSize, 6, this);

    inventoryBookModel->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    inventoryBookModel->setHeaderData(1, Qt::Horizontal, QObject::tr("Libre"));
    inventoryBookModel->setHeaderData(2, Qt::Horizontal, QObject::tr("Titre"));
    inventoryBookModel->setHeaderData(3, Qt::Horizontal, QObject::tr("Auteur"));
    inventoryBookModel->setHeaderData(4, Qt::Horizontal, QObject::tr("Genre"));
    inventoryBookModel->setHeaderData(5, Qt::Horizontal, QObject::tr("Pages"));

    // The condition takes a <= to show all the element in the table.
    for(int row = 0; row <= databaseSize; row++) {
        for(int col = 0; col < 6; col++) {
            /* The row - 1 allows to not take a Book created as empty.
             * if anyone finds out why, I'd love to know what happened here.
             * Raph.
             */
            QModelIndex index = inventoryBookModel->index(row - 1, col, QModelIndex());

            // The data we use depends on the column for the book.
            switch(col) {
                case 0:
                    inventoryBookModel->setData(index, database.getBookDataBase().value(row).getId());
                    break;
                case 1:
                    inventoryBookModel->setData(index,
                                               (database.getBookDataBase().value(row).getIsBorrowable())
                                                    ? "Oui" : "Non");
                    break;
                case 2:
                    inventoryBookModel->setData(index, database.getBookDataBase().value(row).getName());
                    break;
                case 3:
                    inventoryBookModel->setData(index, database.getBookDataBase().value(row).getAuthor().getFullName());
                case 4:
                    break;
                case 5:
                    inventoryBookModel->setData(index, database.getBookDataBase().value(row).getPages());
                default:
                    break;
            }
        }
    }

    ui->BookTableView->setModel(inventoryBookModel);
}
