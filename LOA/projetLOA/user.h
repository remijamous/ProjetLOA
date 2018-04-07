/**
 * \file user.h
 * \brief Header for the User class.
 * \author Remi Jamous & Raphael Santos
 * \date 7 Avril 2018
 */

#ifndef USER_H
#define USER_H

#include "person.h"

/**
 * @brief The User class
 * Inherits from Person.
 * Represents all people that can borrow items.
 */
class User : public Person
{
    private:
         /**
         * @brief email
         * The email of the user.
         */
        QString email;

        /**
         * @brief canBorrow
         * Tells if the user is allowed to borrow items.
         */
        bool canBorrow;

    public:

        /**
         * The User default constructor.
         * Will set the email to "UndefinedEmail".
         * The user will be registered as unable to borrow.
         *
         * Should never be called.
         */
        User();

        /**
         * The valued constructor of User.
         * The user will be registered as able to borrow.
         * @param name: the user's name.
         * @param surname: the user's surname.
         * @param email: the user's email.
         */
        User(QString name, QString surname, QString email);

        /**
         * The destructor of User.
        */
        ~User();


        /* BELOW THIS BREAK, ACCESSORS.
         * =============================
         */

        /**
         * @brief getEmail
         * @return the user's email.
         */
        QString getEmail() const;

        /**
         * @brief setEmail
         * @param value: the user's new email.
         */
        void setEmail(const QString &value);

        /**
         * @brief getCanBorrow
         * @return whether the user can borrow items.
         */
        bool getCanBorrow() const;

        /**
         * @brief setCanBorrow
         * @param value: the new user's status.
         */
        void setCanBorrow(bool value);
};

#endif // USER_H
