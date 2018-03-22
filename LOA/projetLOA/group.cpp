#include "group.h"
#include "stdarg.h"
#include "artist.h"
#include <iterator>
using namespace std;


Group::Group(QString name, const QList<Artist> &artists)
{
       groupName = name;
       members = artists;
}

QList<Artist> Group::getMembers() const
{
    return members;
}

void Group::setMembers(const QList<Artist> &value)
{
    members = value;
}

QString Group::getGroupName() const
{
    return groupName;
}

void Group::setGroupName(const QString &value)
{
    groupName = value;
}


void Group::addMember(const Artist &member)
{
    members.append(member);
}



bool Group::isMemberInGroupe(QString name)
{
    QList<Artist>::iterator it;
    for (it = members.begin(); it != members.end(); ++it)
    {
//        Artist tmp =
        if ((*it).getName() == name || (*it).getSurname() == name)
        {
            return true;
        }
    }
    return false;
}
