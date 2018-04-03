#ifndef USER_H
#define USER_H

#include "person.h"

class User : public Person
{
    private:
        QString email;
        bool canBorrow;

    public:
        User(QString name, QString surname, QString email);
        ~User();

        QString getEmail() const;
        void setEmail(const QString &value);
        bool getCanBorrow() const;
        void setCanBorrow(bool value);
};

#endif // USER_H
