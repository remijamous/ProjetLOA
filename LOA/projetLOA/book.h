#ifndef BOOK_H
#define BOOK_H

#include <QList>
#include <QString>
#include <QStringList>

#include "borrowable.h"
#include "artist.h"

enum class BOOKTYPE {
    ADVENTURE,
    DRAMA,
    HORROR,
    SCIENCE,
    MISC
};


class Book : public Borrowable
{
    private:
        Artist author;
        QList<BOOKTYPE> bookType;
        int pages;

    public:
        Book();
        Book(const int id, const QString name, const Artist author,
             const QList<BOOKTYPE> bookType, const int pages);

        Artist getAuthor() const;
        void setAuthor(const Artist &value);
        QList<BOOKTYPE> getBookType() const;
        // QStringList getBookTypeAsQString() const;
        void setBookType(const QList<BOOKTYPE> &value);
        int getPages() const;
        void setPages(int value);
};

#endif // BOOK_H
