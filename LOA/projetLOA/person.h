#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Person
{
    private:
        QString name;
        QString surname;

    public:
        Person();
        Person(QString name, QString surname);
        ~Person();

        QString getName() const;
        void setName(const QString &value);

        QString getSurname() const;
        void setSurname(const QString &value);

        QString getFullName() const;
};

#endif // PERSON_H
