#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>

#include <QTableWidgetItem>

#include "datamanager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionMainMenuQuickAccess_triggered();
    void on_actionInventoryHubQuickAccess_triggered();

private:
    DataManager database;

    Ui::MainWindow *ui;
    QStandardItemModel *inventoryBookModel;

    // Initialization functions
    void fillInventoryHubTableView();
};

#endif // MAINWINDOW_H
