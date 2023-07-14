#include <iostream>

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
int main()
{
    int a = 10, b = 20;
    
    swap(a, b);

    std::cout << a << std::endl;
    std::cout << b << std::endl;     
}