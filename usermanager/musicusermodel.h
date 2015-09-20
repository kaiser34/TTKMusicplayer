#ifndef MUSICUSERMODEL_H
#define MUSICUSERMODEL_H

#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlQuery>
#include "musiclibexportglobal.h"

class MUSIC_USER_EXPORT MusicUserModel : public QSqlTableModel
{
    Q_OBJECT
public:
    explicit MusicUserModel(QObject *parent = 0,
                            QSqlDatabase db = QSqlDatabase::database("user-data"));

    bool addUser(const QString &uid, const QString &pwd,
                 const QString &mail);
    bool updateUser(const QString &uid, const QString &pwd,
                    const QString &mail, const QString &name,
                    const QString &time);
    bool checkUser(const QString &uid, const QString &pwd);
    bool deleteUser(const QString &uid);
    bool mailCheck(const QString &uid, const QString &mail);

    QStringList getAllUsers() const;
    QString getUserLogTime(const QString &uid);
    QString getUserName(const QString &uid);
    QString getUserPWDMD5(const QString &uid);
    bool databaseSelectedFilter(const QString &uid);

protected:
    QString userPasswordEncryption(const QString &pwd) const;

};

#endif // MUSICUSERMODEL_H