#include "user.h"

User::User(QString name, QString surname, QString email): Person(name, surname)
{
    this->canBorrow = true;
    this->email = email;
}

User::~User()
{

}

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
