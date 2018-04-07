/**
 * \file book.h
 * \brief Header for the Person class.
 * \author Remi Jamous & Raphael Santos
 * \date 7 Avril 2018
 */

#ifndef BOOK_H
#define BOOK_H

#include <QList>
#include <QString>
#include <QStringList>

#include "borrowable.h"
#include "artist.h"

/**
 * @brief The BOOKTYPE enum
 * Represents all the different types of books.
 * A book can have several types.
 * If no type can represent a book, use "MISC".
 */
enum class BOOKTYPE {
    ADVENTURE,
    DRAMA,
    HORROR,
    SCIENCE,
    MISC
};


/**
 * @brief The Book class
 * Inherits from Borrowable.
 * This class represents a book that can be borrowed.
 */
class Book : public Borrowable
{
    private:
        /**
         * @brief author
         * The author of the book.
         */
        Artist author;

        /**
         * @brief bookType
         * The type of the book.
         * It can have several types.
         */
        QList<BOOKTYPE> bookType;

        /**
         * @brief pages
         * The number of pages of the book.
         */
        int pages;

    public:
        /**
         * The default constructor for Book.
         * It will call the default constructors of Artist and Borrowable.
         * The page count will be put at -1.
         *
         * Should never be called.
         */
        Book();

        /**
         * The valued constructor for Book.
         * @param id: the book's id.
         * @param name: the book's name.
         * @param author: the Artist who wrote the book.
         * @param bookType: The different types of the book.
         * @param pages: the number of pages of the book.
         */
        Book(const int id, const QString name, const Artist author,
             const QList<BOOKTYPE> bookType, const int pages);


        /* BELOW THIS BREAK, METHODS.
         * ==========================
         */

        /**
         * @brief getBookTypeAsQString
         * @return all the book's type as a QStringList.
         */
        QStringList getBookTypeAsQStringList() const;


        /* BELOW THIS BREAK, ACCESSORS.
         * =============================
         */

        /**
         * @brief getAuthor
         * @return the book's author.
         */
        Artist getAuthor() const;

        /**
         * @brief setAuthor
         * @param value: the new author.
         */
        void setAuthor(const Artist &value);

        /**
         * @brief getBookType
         * @return all the book's type.
         */
        QList<BOOKTYPE> getBookType() const;

        /**
         * @brief setBookType
         * @param value: the new book's types.
         */
        void setBookType(const QList<BOOKTYPE> &value);

        /**
         * @brief getPages
         * @return the number of pages of the book.
         */
        int getPages() const;

        /**
         * @brief setPages
         * @param value: the new number of pages.
         */
        void setPages(int value);
};

#endif // BOOK_H
