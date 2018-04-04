#ifndef DVD_H
#define DVD_H

#include "borrowable.h"
#include "artist.h"

enum class DVDSTYLE {
    COMEDY,
    DOCUMENTARY,
    ROMANCE,
    WESTERN
};

class Dvd : public Borrowable {
    private:
        Artist producer;
        QList<Artist> actors;
        DVDSTYLE dvdStyle;
        int duration;

    public:
        Dvd(const int id, const QString name, const Artist producer, const QList<Artist> actors, const DVDSTYLE dvdStyle, const int duration);

        Artist getProducer() const;
        void setProducer(const Artist &value);
        QList<Artist> getActors() const;
        void setActors(const QList<Artist> &value);
        DVDSTYLE getDvdStyle() const;
        void setDvdStyle(const DVDSTYLE &value);
        int getDuration() const;
        void setDuration(int value);
};

#endif // DVD_H
