#include <iostream>

namespace foo{
    int n =1;
    int foo()
    {
        return n*n; 
    }
}

int n =2;

int main()
{
    int n = 3;
    std::cout<< foo::n<<", "<< ::n<<", " << n <<std::endl;
    std::cout<< foo::foo()<<std::endl;
    return 0;
}