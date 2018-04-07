/**
 * \file user.cpp
 * \brief Implementation of the User's header.
 * \author Remi Jamous & Raphael Santos
 * \date 7 Avril 2018
 */


#include "user.h"

/**
 * The User default constructor.
 * Will set the email to "UndefinedEmail".
 * The user will be registered as unable to borrow.
 *
 * Should never be called.
 */
User::User(): Person() {
    this->canBorrow = false;
    this->email = "UndefinedEmail";
}

/**
 * The valued constructor of User.
 * The user will be registered as able to borrow.
 * @param name: the user's name.
 * @param surname: the user's surname.
 * @param email: the user's email.
 */
User::User(QString name, QString surname, QString email): Person(name, surname)
{
    this->canBorrow = true;
    this->email = email;
}

/**
 * The destructor of User.
*/
User::~User() {}


/* BELOW THIS BREAK, ACCESSORS.
 * =============================
 */

/**
 * @brief getEmail
 * @return the user's email.
 */
QString User::getEmail() const
{
    return email;
}

/**
 * @brief setEmail
 * @param value: the user's new email.
 */
void User::setEmail(const QString &value)
{
    email = value;
}

/**
 * @brief getCanBorrow
 * @return whether the user can borrow items.
 */
bool User::getCanBorrow() const
{
    return canBorrow;
}

/**
 * @brief setCanBorrow
 * @param value: the new user's status.
 */
void User::setCanBorrow(bool value)
{
    canBorrow = value;
}
