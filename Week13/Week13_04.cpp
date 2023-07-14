#include <iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    int r;
    Circle():radius(1){std::cout<<"C() "<< this <<std::endl;}
    Circle (int r):radius(r){std::cout<<"C(int) "<< this <<std::endl;}
    ~Circle(){std::cout<<"~C() "<< this <<std::endl;};
    double getArea(){return 3.14* radius * radius;};
};

int main()
{
    Circle pizza(5);
    Circle *p = &pizza;
    Circle &r = pizza;

    std::cout<< pizza.getArea() << std::endl;
    std::cout<< p->getArea() << std::endl;
    std::cout<< r.getArea() << std::endl;
    std::cout<< &pizza << std::endl;
}