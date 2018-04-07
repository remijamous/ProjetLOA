/**
 * \file person.h
 * \brief Header for the Person class.
 * \author Remi Jamous & Raphael Santos
 * \date 7 Avril 2018
 */

#ifndef PERSON_H
#define PERSON_H

#include <QString>


/**
 * @brief The Person class
 * This class is made to represent all the different kinds of persons
 * the program will have to manage.
 * It gives a common basis between the Users and the Artists.
 */
class Person
{
    private:
         /**
         * @brief name
         * The first name of the person.
         */
        QString name;

        /**
         * @brief surname
         * The last name of a person.
         */
        QString surname;

    public:
        /**
         * The default Person constructor.
         * If called, it will create the person.
         * Its name will be "UndefinedName".
         * Its surname will be "UndefinedSurname".
         *
         * Should never be called.
         */
        Person();

        /**
         * The default and valued constructor for Person.
         * Any person should be instanciated using this constructor.
         * @param name: the name of the person.
         * @param surname: the last name of the person.
         */
        Person(QString name, QString surname);

        /**
         * The destructor of Person.
         */
        ~Person();


        /* BELOW THIS BREAK, METHODS.
         * ==========================
         */

        /**
         * @brief Returns the name and surname contatenated in a single QString.
         * @return the name and the surname separated by a white space.
         */
        QString getFullName() const;


        /* BELOW THIS BREAK, ACCESSORS.
         * =============================
         */

        /**
         * @brief Get the name of the person.
         * @return the name of the person.
         */
        QString getName() const;

        /**
         * @brief Set a new name for the person.
         * @param value the new name of the person.
         */
        void setName(const QString &value);

        /**
         * @brief Get the surname of the person.
         * @return the surname of the person.
         */
        QString getSurname() const;

        /**
         * @brief Set a new surname for the person.
         * @param value the surnew name of the person.
         */
        void setSurname(const QString &value);
};

#endif // PERSON_H
