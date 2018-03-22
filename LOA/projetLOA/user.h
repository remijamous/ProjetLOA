#ifndef USER_H
#define USER_H

#include "person.h"

class User : public Person
{
public:
    QString email;
    bool canBorrow;
    User(QString name, QString surname, QString email);
  //  ~User();

    QString getEmail() const;
    void setEmail(const QString &value);
    bool getCanBorrow() const;
    void setCanBorrow(bool value);
};

#endif // USER_H
