#include <iostream>
//함수 오버로딩

void f(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
void f(int a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
int main()
{
    int a = 10, b = 20;
    
    f(10, b);
    // f(a,b); 컴파일 에러 발생

    std::cout << a << std::endl;
    std::cout << b << std::endl;     
}