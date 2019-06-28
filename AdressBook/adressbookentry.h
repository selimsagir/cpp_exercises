#ifndef ADRESSBOOKENTRY_H
#define ADRESSBOOKENTRY_H

#include <QObject>
#include <QString>
#include <QDate>
#include <QStringList>
class AdressBookEntry : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString adress READ adress WRITE setAdress NOTIFY adressChanged)
    Q_PROPERTY(QDate birthday READ birthday WRITE setBirthday NOTIFY birthdayChanged)
    Q_PROPERTY(QStringList phoneNumbers READ phoneNumbers WRITE setPhoneNumbers NOTIFY phoneNumbersChanged)
public:
    explicit AdressBookEntry(QObject *parent = nullptr);

    QString name() const;
    void setName(const QString &name);

    QString adress() const;
    void setAdress(const QString &adress);

    QDate birthday() const;
    void setBirthday(const QDate &birthday);

    QStringList phoneNumbers() const;
    void setPhoneNumbers(const QStringList &phoneNumbers);

signals:

    void nameChanged();
    void adressChanged();
    void birthdayChanged();
    void phoneNumbersChanged();

public slots:
private:
    QString m_name;
    QString m_adress;
    QDate m_birthday;
    QStringList m_phoneNumbers;

};

#endif // ADRESSBOOKENTRY_H
