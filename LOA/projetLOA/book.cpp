#include "book.h"

Book::Book() : Borrowable() {
    this->author = Artist("Undefined", "Undefined");
    this->bookType = QList<BOOKTYPE>() << BOOKTYPE::MISC;
    this->pages = -1;
}

Book::Book(const int id, const QString name, const Artist author,
           const QList<BOOKTYPE> bookTypes, const int pages) : Borrowable(id, name) {
    this->author = author;
    this->pages = pages;
    this->bookType = *(new QList<BOOKTYPE>);

    for(QList<BOOKTYPE>::const_iterator it = bookTypes.cbegin(); it != bookTypes.end(); ++it) {
        this->bookType.append(*it);
    }
}

QList<BOOKTYPE> Book::getBookType() const
{
    return bookType;
}


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
void Book::setBookType(const QList<BOOKTYPE> &value)
{
    bookType = value;
}

int Book::getPages() const
{
    return pages;
}

void Book::setPages(int value)
{
    pages = value;
}

Artist Book::getAuthor() const
{
    return author;
}

void Book::setAuthor(const Artist &value)
{
    author = value;
}
