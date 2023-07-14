#include <iostream>

int main()
{
    int n =1;
    int *p = &n;
    int &r = n;

    std::cout << n << std::endl;
    std::cout << *p << std::endl;
    std::cout << r << std::endl;
    std::cout << &n << std::endl;
    std::cout << p << std::endl;
    std::cout << &r << std::endl;

    n=10;
    std::cout << n << std::endl;
    std::cout << *p << std::endl;
    std::cout << r << std::endl;
    
    ++*p;
    std::cout << n << std::endl;
    std::cout << *p << std::endl;
    std::cout << r << std::endl;
    
    r++;
    std::cout << n << std::endl;
    std::cout << *p << std::endl;
    std::cout << r << std::endl;
    //같은공간을 조작하니깐 당연히 다 같이 커짐
}