#include <iostream>
#include <string>
#include <vector>

struct Vertex
{
    float x,y,z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
       stream << vertex.x << "," << vertex.y << "," << vertex.z;
       return stream;

}

void Function(const std::vector<Vertex>& vertices)
{

}

int main()
{
   std::vector<Vertex> vertices;
   vertices.push_back({1,2,3});
   vertices.push_back({3,4,5});
   Function(vertices);

   for (unsigned long i = 0 ; i < vertices.size(); i++)
   {
       std::cout<<vertices[i]<<std::endl;

   }

   // delete second element
    vertices.erase(vertices.begin()+1);
        // Same with above ;

    std::cout << "-----" << std::endl;

   for (Vertex& v : vertices) {
       std::cout << v << std::endl;
   }

    std::cin.get();
}
