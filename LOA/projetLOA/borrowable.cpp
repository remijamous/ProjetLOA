#include "borrowable.h"

Borrowable::Borrowable(const QString name, const QList<QString> &keywords)
{
    this->setIsBorrowable(true);
    this->setKeywords(keywords);
    this->setName(name);
    //this->borrowDate = new QList<tuple<QDate,QDate,User> >() ;
}
/*
Borrowable::Borrowable(const QString name, const QList<QString> &keywords, bool isBorrowable, const QList<tuple<QDate, QDate, User> > &borrowDate)
{
    Borrowable(name, &keywords);
    this->setIsBorrowable(isBorrowable);
    borrowDate.append(&borrowDate);
}
Borrowable::Borrowable()
{

}
*/
QList<tuple<QDate, QDate, User> > Borrowable::getBorrowDate() const
{
    return borrowDate;
}

void Borrowable::setBorrowDate(const QList<tuple<QDate, QDate, User> > &value)
{
    borrowDate = value;
}



QList<QString> Borrowable::getKeywords() const
{
    return keywords;
}

void Borrowable::setKeywords(const QList<QString> &value)
{
    keywords = value;
}

bool Borrowable::getIsBorrowable() const
{
    return isBorrowable;
}

void Borrowable::setIsBorrowable(bool value)
{
    isBorrowable = value;
}

QString Borrowable::getName() const
{
    return name;
}

void Borrowable::setName(const QString &value)
{
    name = value;
}
