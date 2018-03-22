#ifndef GROUP_H
#define GROUP_H

#include <QObject>
#include <artist.h>

class Group
{
public:
    Group(QString name, const QList<Artist> &artists);

    QString groupName;
    QList<Artist> members;

    QString getGroupName() const;
    void setGroupName(const QString &value);
    QList<Artist> getMembers() const;
    void setMembers(const QList<Artist> &value);

    bool isMemberInGroupe(QString name);
    void addMember(const Artist &member);
};

#endif // GROUP_H
