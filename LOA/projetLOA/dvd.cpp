#include "dvd.h"

Dvd::Dvd(const int id, const QString name, const Artist producer,
         const QList<Artist> actors, const DVDSTYLE dvdStyle,
         const int duration) : Borrowable(id, name) {
    this-producer = producer;
    this->actors = actors;
    this->dvdStyle = dvdStyle;
    this->duration = duration;
}

QList<Artist> Dvd::getActors() const
{
    return actors;
}

void Dvd::setActors(const QList<Artist> &value)
{
    actors = value;
}

DVDSTYLE Dvd::getDvdStyle() const
{
    return dvdStyle;
}

void Dvd::setDvdStyle(const DVDSTYLE &value)
{
    dvdStyle = value;
}

int Dvd::getDuration() const
{
    return duration;
}

void Dvd::setDuration(int value)
{
    duration = value;
}

Artist Dvd::getProducer() const
{
    return producer;
}

void Dvd::setProducer(const Artist &value)
{
    producer = value;
}
