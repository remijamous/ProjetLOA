#include "user.h"

User::User(QString nameParam, QString surnameParam, QString emailParam): Person(nameParam,surnameParam),email(emailParam),canBorrow(true)
{
}
/*
User::~User()
{
    ~Personne();
    free(email);
    free(canBorrow);
}*/

bool User::getCanBorrow() const
{
    return canBorrow;
}

void User::setCanBorrow(bool value)
{
    canBorrow = value;
}

QString User::getEmail() const
{
    return email;
}

void User::setEmail(const QString &value)
{
    email = value;
}
