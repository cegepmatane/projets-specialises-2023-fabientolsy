#ifndef CONNEXION_H
#define CONNEXION_H

#include "QSqlDatabase"
#include "QSqlQuery"

static bool connexionDB()
{
    QSqlDatabase connexion = QSqlDatabase::addDatabase("QMYSQL");

    connexion.setHostName("51.79.67.33");
    connexion.setUserName("fabien");
    connexion.setDatabaseName("test");
    connexion.setPort(3306);
    connexion.setPassword("lay87%$hrw");

    if(connexion.open())
    {
        qDebug("0");
        return true;
    }
    else
    {
        return false;
    }
}
#endif // CONNEXION_H
