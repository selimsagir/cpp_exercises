#include <iostream>


class Entity
{
public:
    float X, Y;
    //Constructor for avoid every time give a Init
//    Entity()  //same name with class name
//    {
//        X = 0.0f;
//        Y = 0.0f;
//    }
    Entity(int x, int y)  //same name with class name
    {
        X = x;
        Y = y;
    }
//    void Init()
//    {
//        X = 0.0f;
//        Y = 0.0f;
//    }
    void Print(){
        std::cout << X << " , " << Y << std::endl;
    }
};

int main()
{
    Entity e(10.0 , 5.0);
    Entity e2(1 , 2);
   // I should give every time this init for first set values.
   //e2.Init();
   // e.Init();

    std::cout << e.X << std::endl;
    e.Print();
    std::cin.get();
}
