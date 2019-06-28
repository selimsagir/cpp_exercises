#include <QCoreApplication>
#include <iostream>

class Player
{
public:
    int x, y;
    int Speed;
    void Move(int xa, int ya){
        x += xa * Speed;
        y += ya * Speed;

    }
};



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Player player;
    Player player1;
    player.Move(1, -1);
    player1.Move(2,-2);
    return a.exec();
}
