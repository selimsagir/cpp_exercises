#include <iostream>

int main( )
{


    int *p = new int;
    if(!p)
        std::cout << "allocation of memory failed\n";
    else
    {
        *p = 362243;
        std::cout << "Value of p: " << *p << std::endl;
    }

    float *r = new float(75.25);
    std::cout << "Value of r = " << *r << std::endl;

    int *q = new int[5];
    if(!q)
        std::cout << "Failed to allocate memory\n";
    else
    {
        for (int i = 0 ; i < 5 ; i++) {
            q[i] = i+1;
        }
        for (int i = 0; i < 5 ; i ++) {
            std::cout << q[i] << " " ;
        }
    }

    delete p;
    delete[] q;
    delete r;

    // What will be after free() p, in the below checked it..
    //random value
    if(!p)
        std::cout << "allocation of memory failed\n";
    else
    {
        *p = 362243;
        std::cout << "Value of p: " << *p << std::endl;
    }



    return 0;

}
