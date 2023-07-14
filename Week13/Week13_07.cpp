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

Circle getCircle(){
    std::cout<< "start ... getCircle()"<<std::endl;

    Circle t(3);
    
    std::cout<< "end ... getCircle()"<<std::endl;
    return t;
}

int main()
{
    Circle c;
    std::cout<< c.getArea()<<std::endl;
    c = getCircle();
    std::cout<< c.getArea()<<std::endl;

    
}