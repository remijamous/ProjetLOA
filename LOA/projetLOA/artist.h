/**
 * \file artist.h
 * \brief Header for the Artist class.
 * \author Raphaël Santos
 * \date 7 Avril 2018
 */

#ifndef ARTIST_H
#define ARTIST_H

#include "person.h"

/**
 * @brief The Artist class
 * Inherits from "Person".
 *
 * This class is used to distinguish the users and the artists.
 * It doesn't add much to Person's fields, but helps to the distinction.
 */
class Artist : public Person {
    public:
        /**
         * The default Artist Constructor.
         * Will call Person's default constructor.
         * Please refer to Person's documentation for more information.
         *
         * Should never be called.
         */
        Artist();

        /**
         * The default and valued constructor for Artist.
         * Any artist should be instanciated using this constructor.
         * Calls the valued constructor of Person.
         * @param name: the name of the person.
         * @param surname: the last name of the person.
         */
        Artist(QString name, QString surname);
};

#endif // ARTIST_H
