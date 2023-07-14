#include <iostream>
class Circle{
    int r;
public:
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
};


int main(){
    Circle donut;
    Circle pizza(30);
    Circle a[3];
    Circle *p = a;

    std::cout<<donut.getArea()<<std::endl;
    std::cout<<pizza.getArea()<<std::endl;
    std::cout<<"------------"<<std::endl;

    std::cout<< a[0].getArea()<<std::endl;
    std::cout<< a[1].getArea()<<std::endl;
    std::cout<< a[2].getArea()<<std::endl;

    std::cout<<"------------"<<std::endl;

    std::cout<< p++->getArea()<<std::endl;
    std::cout<< (*p++).getArea()<<std::endl;
    std::cout<< p++->getArea()<<std::endl;
    std::cout<<"------------"<<std::endl;

    Circle *p;
    p = &donut;
    std::cout<<(*p).getArea()<<std::endl;
    p = &pizza;
    std::cout<<(*p).getArea()<<std::endl;
}