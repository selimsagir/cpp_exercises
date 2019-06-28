#include <QCoreApplication>
#include <iostream>


void Function(){

    int i = 0;
    i++;
    std::cout << i << &i <<" "<< std::endl;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    for (int i = 0;i<5;i++) {
        Function();
    }

    return a.exec();
}
