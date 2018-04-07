#include "person.h"

Person::Person() {
    this->surname = QString("Undefined_surname");
    this->name = QString("Undefined_name");
}

Person::Person(QString name, QString surname)
{
    this->surname = surname;
    this->name = name;
}

Person::~Person()
{

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

QString Person::getFullName() const {
    return getName() + QString(" ") + getSurname();
}
