#include <iostream>

namespace first
{

    int add(int a,int b)
    {
        return a+b;
    }
}


namespace second
{

    float add(float a,float b)
    {
        return a+b;
    }
}

using namespace first;
using namespace second;

int main()
{
    std::cout<<add(5,2.5);
    std::cout<<add(5.2,2);
    std::cout<<add(5,2);
}
