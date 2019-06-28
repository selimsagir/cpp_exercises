#include <iostream>
#include <string>
#include <vector>

struct Vertex
{
    float x,y,z;

    Vertex(float x, float y, float z)
        : x(x), y(y), z(z)
    {
    }

    Vertex(const Vertex& vertex)
        :x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout<< "Copied ! " << std::endl;
    }
};



int main()
{
   std::vector<Vertex> vertices;
   //resize Vertez size
   vertices.reserve(3);
//   vertices.push_back(Vertex(11,12,13));
//   vertices.push_back(Vertex(11,12,13));
//   vertices.push_back(Vertex(11,12,13));

    vertices.emplace_back(11,12,13);
    vertices.emplace_back(11,12,13);
    vertices.emplace_back(11,12,13);


    std::cin.get();
}
