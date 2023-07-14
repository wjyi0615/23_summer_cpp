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

Circle getCircle(int n){
    std::cout<< "start ... getCircle()"<<std::endl;
    Circle t1(4);
    Circle t2(3);
    return(n%2) ? t2 : t1;
}

    

int main()
{
    Circle c;
    std::cout<< c.getArea()<<std::endl;
    std::cout<< "before ... getCircle()"<<std::endl;
    c = getCircle(4);
    std::cout<< "after ... getCircle()"<<std::endl;
    std::cout<< c.getArea()<<std::endl;

    
}