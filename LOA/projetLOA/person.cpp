#include "person.h"


Person::Person(QString name, QString surname)
{
    this->surname = surname;
    this->name = name;
}
Person::~Person()
{
    free(&this->name);
    free(&this->surname);
}

QString Person::getSurname() const
{
    return surname;
}

void Person::setSurname(const QString &value)
{
    surname = value;
}

QString Person::getName() const
{
    return name;
}

void Person::setName(const QString &value)
{
    name = value;
}
