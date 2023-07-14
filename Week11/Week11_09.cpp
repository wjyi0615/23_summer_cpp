#include <iostream>

class Circle{
private:
    int radius;
public:
    double getArea() const;
    Circle();
    Circle(int r);
    int getRadius() const;
    int& getRadius(); //함수 오버로딩 리턴타입은 무관함 
    // 함수 오버로딩이 성립하려면 파라미터 타입이 달라야함
    // 같아보이지만 다름
    void setRadius(int r);
};

double Circle::getArea() const{
    return 3.14 * radius * radius;
    //return 3.14 * getRadius() * getRadius(); 
}
Circle::Circle():radius(1){}
Circle::Circle(int r):radius(r){}
int Circle:: getRadius() const { return radius;}
void Circle::setRadius(int r){radius = r;}

int main()
{
    Circle pizza; 

    std::cout<<pizza.getArea()<<std::endl;
    std::cout<<pizza.getRadius()<<std::endl;
    pizza.getRadius() = 10; //됩니다. 레퍼런스 리턴하는 
    std::cout<<pizza.getRadius()<<std::endl;
    
}