#include <iostream>
using namespace std;
int *p;

int f(){
    static int c = 0;
    p = &c;
    return ++c;
}

int main()
{
    std::cout<< f()<< std::endl;
    *p=5;
    std::cout<< f()<< std::endl;
    std::cout<< f()<< std::endl;
}
