/**
 * \file borrowable.cpp
 * \brief Implementation of the Borrowable's header.
 * \author Remi Jamous & Raphael Santos
 * \date 7 Avril 2018
 */

#include <QDate>
#include <QList>
#include <tuple>

#include "borrowable.h"

/**
 * The default Borrowable constructor.
 * If called, it will create a Borrowable.
 * However, its id will be -1, its name "Undefined".
 * It will be registered as borrowed.
 *
 * Should never be called.
 * */
Borrowable::Borrowable() {
    this->id = -1;
    this->setName(QString("Undefined"));
    this->setIsBorrowable(false);
    this->borrowDate = *(new QList<tuple<QDate,QDate,User>>);
}

/**
 * A valued constructor of Borrowable.
 * It will set the item as avalaible for loan.
 * @param id: the id of the item.
 * @param name: the name of the item.
 */
Borrowable::Borrowable(const int id, const QString name)
{
    this->id = id;
    this->setName(name);
    this->setIsBorrowable(true);
    this->borrowDate = *(new QList<tuple<QDate,QDate,User>>);
}

/**
 * A valued constructor of Borrowable.
 * @param id: the id of the item.
 * @param name: the name of the time.
 * @param isBorrowable: whether the item is available.
 * @param borrowDate: list of dates of loaning and the concerned user.
 */
Borrowable::Borrowable(const int id, const QString name, bool isBorrowable,
                       const QList<tuple<QDate, QDate, User> > &borrowDate)
{
    this->id = id;
    this->setName(name);
    this->setIsBorrowable(isBorrowable);
    this->setBorrowDate(borrowDate);
}


/* BELOW THIS BREAK, ACCESSORS.
 * =============================
 */

/**
 * @brief getId
 * @return the item's id.
 */
int Borrowable::getId() const
{
    return id;
}

/**
 * @brief setId
 * @param value: the new item's id.
 */
void Borrowable::setId(int value)
{
    id = value;
}

/**
 * @brief getName
 * @return the item's name.
 */
QString Borrowable::getName() const
{
    return name;
}

/**
 * @brief setName
 * @param value: the new item's name.
 */
void Borrowable::setName(const QString &value)
{
    name = value;
}

/**
 * @brief getIsBorrowable
 * @return if the item is available for loaning.
 */
bool Borrowable::getIsBorrowable() const
{
    return isBorrowable;
}

/**
 * @brief setIsBorrowable
 * @param value: the new item's status.
 */
void Borrowable::setIsBorrowable(bool value)
{
    isBorrowable = value;
}

/**
 * @brief getBorrowDate
 * @return the dates to which the item is borrowed and why who.
 */
QList<tuple<QDate, QDate, User> > Borrowable::getBorrowDate() const
{
    return borrowDate;
}

/**
 * @brief setBorrowDate
 * @param value: the new dates of loaning.
 */
void Borrowable::setBorrowDate(const QList<tuple<QDate, QDate, User> > &value)
{
    borrowDate = value;
}
