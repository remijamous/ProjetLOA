#include <QDate>
#include <QList>
#include <tuple>


#include "borrowable.h"

int Borrowable::getId() const
{
    return id;
}

void Borrowable::setId(int value)
{
    id = value;
}

Borrowable::Borrowable() {
    this->id = -1;
    this->setName(QString("Undefined"));
    this->setIsBorrowable(false);
    this->borrowDate = *(new QList<tuple<QDate,QDate,User>>);
}

Borrowable::Borrowable(const int id, const QString name)
{
    this->id = id;
    this->setName(name);
    this->setIsBorrowable(true);
    this->borrowDate = *(new QList<tuple<QDate,QDate,User>>);
}


Borrowable::Borrowable(const int id, const QString name, bool isBorrowable,
                       const QList<tuple<QDate, QDate, User> > &borrowDate)
{
    this->id = id;
    this->setName(name);
    this->setIsBorrowable(isBorrowable);
    this->setBorrowDate(borrowDate);
}

QList<tuple<QDate, QDate, User> > Borrowable::getBorrowDate() const
{
    return borrowDate;
}

void Borrowable::setBorrowDate(const QList<tuple<QDate, QDate, User> > &value)
{
    borrowDate = value;
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
