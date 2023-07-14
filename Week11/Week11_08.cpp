#include <iostream>

int &f(){
    static int x = 0;
    std::cout<< "in f(), x is " << x <<std::endl;
    return x;
}

int main()
{
    std::cout<<f()<<std::endl;
    std::cout<<f()++<<std::endl;
    std::cout<<(f()=2) <<std::endl;
    std::cout<<f()++<<std::endl;
}