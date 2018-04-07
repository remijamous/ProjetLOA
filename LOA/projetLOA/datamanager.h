#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QString>
#include <QList>
#include <QMap>

#include "book.h"
#include "artist.h"

class DataManager{
    private:
        // Nested class to read books entries.
        class BookReader {
            public:
                BookReader();
                ~BookReader();
                Book interpretQStringData(QString data);
        };

        // Fields of the DataManager.
        BookReader bookReader;

        QMap<int, Book> bookDataBase;

    public:
        DataManager();
        ~DataManager();

        // Methods
        void constructDatabase();
        void constructBookDatabaseMockUp();

        // Setters and Getters
        BookReader getBookReader() const;
        void setBookReader(const BookReader &value);
        QMap<int, Book> getBookDataBase() const;
        void setBookDataBase(const QMap<int, Book> &value);
};

#endif // DATAMANAGER_H
