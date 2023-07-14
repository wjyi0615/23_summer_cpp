#include <iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    int r;
    Circle():radius(1){cout<<"C() "<< this <<endl;}
    //(2)
    Circle (int r):radius(r){cout<<"C(int) "<< this <<endl;}
    //(1)
    ~Circle(){cout<<"~C() "<< this <<endl;};
    //(3)
    Circle(const Circle &c){
        this->radius = c.radius;
        cout<<"C(&)"<<this<<endl;
    }
    //(4)
    Circle& operator=(const Circle &c){
        cout<< "operator= "<< this << endl;
        if(this!= &c){
        this->radius = c.radius;
        }
        return *this;
    }
    //(5)

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
    // function declaration 
    Circle x(); //함수 선언임, 객체 생성 안됨 

    //default constructor
    Circle x1;
    Circle x2{};
    Circle x3 = Circle();
    Circle x4 = Circle{};

    // int
    Circle x5 = 5;
    Circle x6(5);
    Circle x7{5};
    Circle x8 = Circle(5);
    Circle x9 = Circle{5};
    // copy constructor
    Circle xa = x5;
    Circle xb(x5);
    Circle xc{x5};
    std::cout<<"-----------------\n"<<std::endl;
    Circle *p1 = new Circle;
    Circle *p2 = new Circle();
    Circle *p3 = new Circle{};
    Circle *p4 = new Circle(5);
    Circle *p5 = new Circle{5};
    Circle *p6 = new Circle(x5);
    Circle *p7 = new Circle{x5};
    std::cout<<"-----------------\n"<<std::endl;
    x1 = x5;
    x1 = *p5;

    std::cout<<"-----------------\n"<<std::endl;
    Circle &r = * new Circle(7);
    delete &r;

    std::cout<<"-----------------\n"<<std::endl;
    delete p7;
    delete p6;
    delete p5;
    delete p4;
    delete p3;
    delete p2;
    delete p1;

}