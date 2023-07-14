#include <iostream>

int main()
{
    int n = 10;
    int *p = &n;
    int &r = n ; //레퍼런스 선언, 선언동시에 초기화 해야함

    std::cout << n << ", "<< &n <<std::endl;
    std::cout << *p << ", "<< p <<std::endl;
    std::cout << r << ", "<< &p <<std::endl;
    n++;
    std::cout << n << ", "<< &n <<std::endl;
    std::cout << *p << ", "<< p <<std::endl;
    std::cout << r << ", "<< &p <<std::endl;
    ++(*p);
    std::cout << n << ", "<< &n <<std::endl;
    std::cout << *p << ", "<< p <<std::endl;
    std::cout << r << ", "<< &p <<std::endl;
    
    return 0;
}