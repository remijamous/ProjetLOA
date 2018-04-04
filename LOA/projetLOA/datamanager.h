#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QString>
#include <QList>
#include <QMap>

#include "book.h"
#include "dvd.h"
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

        // Nested class to read DVD entries.
        class DVDReader {
            public:
                DVDReader();
                ~DVDReader();
                Dvd interpretQStringData(QString data);
        };

        // Fields of the DataManager.
        BookReader bookReader;
        DVDReader dvdReader;

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
        DVDReader getDVDReader() const;
        void setDVDReader(const DVDReader &value);
        QMap<int, Book> getBookDataBase() const;
        void setBookDataBase(const QMap<int, Book> &value);
};

#endif // DATAMANAGER_H
