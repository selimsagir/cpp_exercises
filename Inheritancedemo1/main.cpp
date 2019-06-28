#include <QCoreApplication>
#include <iostream>

class Entity
{
public:
    float X, Y;
    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

class Player : public Entity
{
public:
    const char* Name;
    void PrintName()
    {
        std::cout << Name << std::endl;
    }

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << sizeof (Player) << std::endl;
    Player player;
    player.Move(1.00, -1.00);

    return a.exec();
}
