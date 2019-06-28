#include "adressbookentry.h"

AdressBookEntry::AdressBookEntry(QObject *parent) : QObject(parent)
{

}

QString AdressBookEntry::name() const
{
    return m_name;
}

void AdressBookEntry::setName(const QString &name)
{
    if (m_name != name){
        m_name = name;
        emit nameChanged();
    }

}

QString AdressBookEntry::adress() const
{
    return m_adress;
}

void AdressBookEntry::setAdress(const QString &adress)
{
    if (m_adress != adress){
        m_adress = adress;
        emit adressChanged();
    }
}

QDate AdressBookEntry::birthday() const
{
    return m_birthday;
}

void AdressBookEntry::setBirthday(const QDate &birthday)
{
    if(m_birthday != birthday){
        m_birthday = birthday;
        emit birthdayChanged();
    }

}

QStringList AdressBookEntry::phoneNumbers() const
{
    return m_phoneNumbers;
}

void AdressBookEntry::setPhoneNumbers(const QStringList &phoneNumbers)
{
    if (m_phoneNumbers != phoneNumbers){
        m_phoneNumbers = phoneNumbers;
        emit phoneNumbersChanged();
    }

}
