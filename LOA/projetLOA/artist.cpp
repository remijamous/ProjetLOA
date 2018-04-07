/**
 * \file artist.cpp
 * \brief Implementation of the Artist's header.
 * \author Remi Jamous & Raphael Santos
 * \date 7 Avril 2018
 */

#include "artist.h"

/**
 * The default Artist Constructor.
 * Will call Person's default constructor.
 * Please refer to Person's documentation for more information.
 *
 * Should never be called.
 */
Artist::Artist() : Person() {}


/**
 * The default and valued constructor for Artist.
 * Any artist should be instanciated using this constructor.
 * Calls the valued constructor of Person.
 * @param name: the name of the person.
 * @param surname: the last name of the person.
 */
Artist::Artist(QString name, QString surname) : Person(name, surname) {}
