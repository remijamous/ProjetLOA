#ifndef BORROWABLE_H
#define BORROWABLE_H

#include "user.h"

#include <QDate>
#include <QList>
#include <tuple>


using namespace std;

class Borrowable
{
    private:
        QString name;
        bool isBorrowable;
        QList<tuple<QDate,QDate,User>> borrowDate;

    public:
        Borrowable();
        Borrowable(const QString);
        Borrowable(const QString name, bool isBorrowable, const QList<tuple<QDate, QDate, User> > &borrowDate);

        QString getName() const;
        void setName(const QString &value);
        bool getIsBorrowable() const;
        void setIsBorrowable(bool value);
        QList<tuple<QDate, QDate, User> > getBorrowDate() const;
        void setBorrowDate(const QList<tuple<QDate, QDate, User> > &value);
};

#endif // BORROWABLE_H
