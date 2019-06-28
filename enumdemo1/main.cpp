#include <QCoreApplication>
#include <iostream>

enum Example : unsigned char
{
    A,B,C

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Example value =B;
    if (value == B)
    {
        //do something here

    }

    return a.exec();
}
