#include <QCoreApplication>
#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char* buffer = new char[8];
    memset(buffer,0,8);

    return a.exec();
}
