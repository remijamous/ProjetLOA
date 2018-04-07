/**
 * \file book.cpp
 * \brief Implementation of the book's header.
 * \author Remi Jamous & Raphael Santos
 * \date 7 Avril 2018
 */

#include "book.h"

/**
 * The default constructor for Book.
 * It will call the default constructors of Artist and Borrowable.
 * The page count will be put at -1.
 *
 * Should never be called.
 */
Book::Book() : Borrowable() {
    this->author = Artist("Undefined", "Undefined");
    this->bookType = QList<BOOKTYPE>() << BOOKTYPE::MISC;
    this->pages = -1;
}

/**
 * The valued constructor for Book.
 * @param id: the book's id.
 * @param name: the book's name.
 * @param author: the Artist who wrote the book.
 * @param bookType: The different types of the book.
 * @param pages: the number of pages of the book.
 */
Book::Book(const int id, const QString name, const Artist author,
           const QList<BOOKTYPE> bookTypes, const int pages) : Borrowable(id, name) {
    this->author = author;
    this->pages = pages;
    this->bookType = *(new QList<BOOKTYPE>);

    for(QList<BOOKTYPE>::const_iterator it = bookTypes.cbegin(); it != bookTypes.end(); ++it) {
        this->bookType.append(*it);
    }
}


/* BELOW THIS BREAK, METHODS.
 * ==========================
 */

/**
 * @brief getBookTypeAsQString
 * @return all the book's type as a QStringList.
 */
/*
QStringList Book::getBookTypeAsQString() const {
    QStringList result;
    QList<BOOKTYPE>::const_iterator it;

    for(it = bookType.cbegin(); it != bookType.cend; it++) {
        BOOKTYPE tmp = *it;
        switch(tmp) {
            case BOOKTYPE::ADVENTURE:
                result.append(QString("Aventure"));
                break;
            case BOOKTYPE::DRAMA:
                result.append(QString("Drame"));
                break;
            case BOOKTYPE::HORROR:
                result.append(QString("Horreur"));
                break;
            case BOOKTYPE::SCIENCE:
                result.append(QString("Sciences"));
                break;
            case BOOKTYPE::MISC:
                result.append(QString("Autre"));
                break;
            default:
                break;
        }
    }
    return result;
}
*/


/* BELOW THIS BREAK, ACCESSORS.
 * =============================
 */

/**
 * @brief getAuthor
 * @return the book's author.
 */
Artist Book::getAuthor() const
{
    return author;
}

/**
 * @brief setAuthor
 * @param value: the new author.
 */
void Book::setAuthor(const Artist &value)
{
    author = value;
}

/**
 * @brief getBookType
 * @return all the book's type.
 */
QList<BOOKTYPE> Book::getBookType() const
{
    return bookType;
}

/**
 * @brief setBookType
 * @param value: the new book's types.
 */
void Book::setBookType(const QList<BOOKTYPE> &value)
{
    bookType = value;
}

/**
 * @brief getPages
 * @return the number of pages of the book.
 */
int Book::getPages() const
{
    return pages;
}

/**
 * @brief setPages
 * @param value: the new number of pages.
 */
void Book::setPages(int value)
{
    pages = value;
}
