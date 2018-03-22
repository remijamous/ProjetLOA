#ifndef PERSON_H
#define PERSON_H

#include <QObject>

class Person
{
public:
    Person(QString name, QString surname);
    ~Person();
    QString name;
    QString surname;

    QString getName() const;
    void setName(const QString &value);

    QString getSurname() const;
    void setSurname(const QString &value);
};

#endif // PERSON_H
