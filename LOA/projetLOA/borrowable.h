#ifndef BORROWABLE_H
#define BORROWABLE_H

#include <QObject>
#include "user.h"
#include <QDate>
#include <tuple>
using namespace std;

class Borrowable
{
public:
  //  Borrowable();
    Borrowable(const QString , const QList<QString> &keywords);
  //  Borrowable(const QString name, const QList<QString> &keywords, bool isBorrowable, const QList<tuple<QDate, QDate, User> > &borrowDate);

    QString name;
    bool isBorrowable;
    QList<QString> keywords;
    QList<tuple<QDate,QDate,User>> borrowDate;

    QString getName() const;
    void setName(const QString &value);
    bool getIsBorrowable() const;
    void setIsBorrowable(bool value);
    QList<QString> getKeywords() const;
    void setKeywords(const QList<QString> &value);
    QList<tuple<QDate, QDate, User> > getBorrowDate() const;
    void setBorrowDate(const QList<tuple<QDate, QDate, User> > &value);
};

#endif // BORROWABLE_H
