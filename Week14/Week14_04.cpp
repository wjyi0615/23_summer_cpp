#include <iostream>
using namespace std;
static int g = 0;

static int f(){
    static int c = 0;
    return ++c;
}

int main()
{
    std::cout<< f()<< std::endl;
    std::cout<< f()<< std::endl;
    std::cout<< f()<< std::endl;
}
