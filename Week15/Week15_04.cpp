#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
    int cx;
    int cy; 
    //동적바인딩을 만들자
    virtual double getArea(){ return 0.0; }
    Shape(int w, int h):cx(w), cy(h){}
}

const double Shape::PI = 3.14;

class Triangle: public Shape{
public:
    int cx;
    int cy;
    static const double PI;
    double getArea(){ return cx*cy/2.0; }
    Shape(int w, int h): Shape(h){}
}

class Oval: public Shape {
public:
    double
}
class Rectangle: public Shape{
    
}

int main()
{
    Triangle  s1= Triangle(10,10);
    Oval      s2= Oval(10,10);
    Rectangle s3= Rectangle(10,10);

    Shape *a[3]{
        &s1, &s2, &s3
    };

    /*
    cout<<s1.getArea()<<endl;
    cout<<s2.getArea()<<endl;
    cout<<s3.getArea()<<endl;
    */
    cout<<a[0]->getArea()<<endl;
    cout<<a[1]->getArea()<<endl;
    cout<<a[2]->getArea()<<endl;

}