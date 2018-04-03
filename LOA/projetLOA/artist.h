#ifndef ARTIST_H
#define ARTIST_H

#include "person.h"

class Artist : public Person {
    public:
        Artist();
        Artist(QString name, QString surname);
};

#endif // ARTIST_H
