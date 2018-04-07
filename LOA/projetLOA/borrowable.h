/**
 * \file borrowable.h
 * \brief Header for the Borrowable class.
 * \author Remi Jamous & Raphael Santos
 * \date 7 Avril 2018
 */

#ifndef BORROWABLE_H
#define BORROWABLE_H

#include "user.h"

#include <QDate>
#include <QList>
#include <tuple>


using namespace std;


/**
 * @brief The Borrowable class
 * The class used to represents all the types of objects that could be borrowed.
 * Should not be used unaltered.
 * Instead, use the child classes.
 */
class Borrowable
{
    private:
        /**
         * @brief id
         * Identify the item amongst all the others.
         */
        int id;

        /**
         * @brief name
         * The name of the borrowable.
         */
        QString name;

        /**
         * @brief isBorrowable
         * Whether the item is borrowed or not.
         */
        bool isBorrowable;

        /**
         * @brief borrowDate
         * All the dates to which the item is/will be borrowed.
         * A user is associated to a pair of dates.
         */
        QList<tuple<QDate,QDate,User>> borrowDate;

    public:
        /**
         * The default Borrowable constructor.
         * If called, it will create a Borrowable.
         * However, its id will be -1, its name "Undefined".
         * It will be registered as borrowed.
         *
         * Should never be called.
         * */
        Borrowable();

        /**
         * A valued constructor of Borrowable.
         * It will set the item as avalaible for loan.
         * @param id: the id of the item.
         * @param name: the name of the item.
         */
        Borrowable(const int id, const QString name);

        /**
         * A valued constructor of Borrowable.
         * @param id: the id of the item.
         * @param name: the name of the time.
         * @param isBorrowable: whether the item is available.
         * @param borrowDate: list of dates of loaning and the concerned user.
         */
        Borrowable(const int id, const QString name,
                   bool isBorrowable, const QList<tuple<QDate, QDate, User> > &borrowDate);


        /* BELOW THIS BREAK, ACCESSORS.
         * =============================
         */

        /**
         * @brief getId
         * @return the item's id.
         */
        int getId() const;

        /**
         * @brief setId
         * @param value: the new item's id.
         */
        void setId(int value);

        /**
         * @brief getName
         * @return the item's name.
         */
        QString getName() const;

        /**
         * @brief setName
         * @param value: the new item's name.
         */
        void setName(const QString &value);

        /**
         * @brief getIsBorrowable
         * @return if the item is available for loaning.
         */
        bool getIsBorrowable() const;

        /**
         * @brief setIsBorrowable
         * @param value: the new item's status.
         */
        void setIsBorrowable(bool value);

        /**
         * @brief getBorrowDate
         * @return the dates to which the item is borrowed and why who.
         */
        QList<tuple<QDate, QDate, User> > getBorrowDate() const;

        /**
         * @brief setBorrowDate
         * @param value: the new dates of loaning.
         */
        void setBorrowDate(const QList<tuple<QDate, QDate, User> > &value);
};

#endif // BORROWABLE_H
