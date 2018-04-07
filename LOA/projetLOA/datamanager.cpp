#include <QFile>
#include <QString>
#include <QStringRef>
#include <QStringList>
#include <QStringListIterator>
#include <QTextStream>
#include <QDebug>
#include <string.h>

#include "datamanager.h"
#include "book.h"
#include "artist.h"

/* COMMON READER METHODS */

int extractIdFromQString(QString strId) {
    return (strId.mid(1, strId.length())).toInt();
}

/* BOOK READER AREA */

DataManager::BookReader::BookReader() {}

DataManager::BookReader::~BookReader() {}


/* DATA MANAGER AREA */

DataManager::DataManager()
{
    this->bookReader = BookReader();
}

DataManager::~DataManager() {}

/* The main method that reads the database file.
 * It creates a huge list of all the borrowables in the database.
 * Should be called everytime the database is updated.
 */
void DataManager::constructDatabase() {
    QFile database("database.txt");

    if(!database.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << QString("Error: Database couldn't be read.");
    }
    else {
        QTextStream in(&database);
        QString line;

        // Parcours de la database;
        while(!in.atEnd()) {
            QString line = in.readLine();

            // We take the first id element to identify the object described by the line.
            int itemTypeCode = QString(line[0]).toInt();

            switch(itemTypeCode) {
                // Book
                case 1:
                    qDebug() << QString("Book");
                    break;
                // DVD
                case 2:
                    qDebug() << QString("DVD");
                    break;
                // CD
                case 3:
                    qDebug() << QString("CD");
                    break;
                default:
                    qDebug() << QString("Error: No such type of item.");
                    break;
            }
        }
        database.close();
    }
}

/* A mockup database for books. */
void DataManager::constructBookDatabaseMockUp() {
    // BOOK CREATION
    Book leFeu = Book(1, "Le Feu", Artist("Henry", "Barbusse"), QList<BOOKTYPE>() << BOOKTYPE::MISC, 325);
    Book prinMaths = Book(2, "Principae Mathematics", Artist("Isaac", "Newton"), QList<BOOKTYPE>() << BOOKTYPE::SCIENCE, 650);
    Book hobbit = Book(3, "Le Hobbit", Artist("J.R.R", "Tolkien"), QList<BOOKTYPE>() << BOOKTYPE::ADVENTURE, 900);

    QMap<int, Book> bookData;
    bookData.insert(1, leFeu);
    bookData.insert(2, prinMaths);
    bookData.insert(3, hobbit);

    this->setBookDataBase(bookData);
}


/* Setters and Getters */
DataManager::BookReader DataManager::getBookReader() const
{
    return bookReader;
}

void DataManager::setBookReader(const BookReader &value)
{
    bookReader = value;
}

QMap<int, Book> DataManager::getBookDataBase() const
{
    return bookDataBase;
}

void DataManager::setBookDataBase(const QMap<int, Book> &value)
{
    bookDataBase = value;
}
