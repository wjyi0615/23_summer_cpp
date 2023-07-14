#include <iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    int r;
    Circle():radius(1){cout<<"C() "<< this <<endl;}
    Circle (int r):radius(r){cout<<"C(int) "<< this <<endl;}
    ~Circle(){cout<<"~C() "<< this <<endl;};
    Circle(const Circle &c){
        this->radius = c.radius;
        cout<<"C(&)"<<this<<endl;
    }

    double getArea(){return 3.14* radius * radius;};
};

Circle getCircle(int n){
    std::cout<< "start ... getCircle()"<<std::endl;
    Circle t1(4);
    Circle t2(3);
    return(n%2) ? t2 : t1;
    //return t1;
}

    

int main()
{
    Circle c1;
    Circle c2 =c1;
    Circle c3(c1);

    std::cout<<"end main()"<<std::endl;
    
}