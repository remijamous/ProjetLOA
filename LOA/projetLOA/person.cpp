/**
 * \file person.cpp
 * \brief Implementation of the Person's header.
 * \author Remi Jamous & Raphael Santos
 * \date 7 Avril 2018
 */

#include "person.h"

/**
 * The default Person constructor.
 * If called, it will create the person.
 * Its name will be "UndefinedName".
 * Its surname will be "UndefinedSurname".
 *
 * Should never be called.
 */
Person::Person() {
    this->surname = QString("UndefinedSurname");
    this->name = QString("UndefinedName");
}

/**
 * The default and valued constructor for person.
 * Any person should be instanciated using this constructor.
 * @param name: the name of the person.
 * @param surname: the last name of the person.
 */
Person::Person(QString name, QString surname)
{
    this->surname = surname;
    this->name = name;
}

/**
 * The destructor of Person.
 */
Person::~Person() {}



/* BELOW THIS BREAK, METHODS.
 * ==========================
 */

/**
 * @brief Returns the name and surname contatenated in a single QString.
 * @return the name and the surname separated by a white space.
 */
QString Person::getFullName() const {
    return getName() + QString(" ") + getSurname();
}


/* BELOW THIS BREAK, ACCESSORS.
 * =============================
 */

/**
 * @brief Get the name of the person.
 * @return the name of the person.
 */
QString Person::getSurname() const
{
    return surname;
}

/**
 * @brief Set a new name for the person.
 * @param value the new name of the person.
 */
void Person::setSurname(const QString &value)
{
    surname = value;
}

/**
 * @brief Get the surname of the person.
 * @return the surname of the person.
 */
QString Person::getName() const
{
    return name;
}

/**
 * @brief Set a new surname for the person.
 * @param value the surnew name of the person.
 */
void Person::setName(const QString &value)
{
    name = value;
}
