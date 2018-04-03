#ifndef BOOK_H
#define BOOK_H

#include <QList>

#include "borrowable.h"
#include "artist.h"

enum class BookType {
    ADVENTURE,
    DRAMA,
    HORROR,
    SCIENCE,
    MISC
};


class Book : public Borrowable
{
    private:
        // Artist author;
        QList<int> bookType;
        int pages;

    public:
        Book();
};

#endif // BOOK_H
