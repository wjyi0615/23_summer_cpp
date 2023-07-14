#include <iostream>

struct Circle {
public: //멤버에 대한 접근 지정자 == public은 외부에서 접근할 수 있다. 
    int r;
    double getArea();
};

//double getArea() 이렇게 쓰면 전역 함수임
double Circle::getArea()
{
    return 3.14*r*r; // 선언하지 않아도 멤버들은 그냥 access 가능하다.
}

int main()
{
    Circle donut;
    Circle pizza;

    //access해서 값을 집어 넣음
    donut.r = 10;
    pizza.r = 30;
    
    std::cout<< &donut << std::endl;   
    std::cout<< &pizza << std::endl;
    std::cout<< donut.getArea() << std::endl;
    std::cout<< pizza.getArea() << std::endl;

    return 0;
}