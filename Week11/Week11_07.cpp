#include <iostream>

class Circle{
private:
    int radius;
public:
    double getArea() const;
    Circle();
    Circle(int r);
    int getRadius() const;//멤버 변수 수정하지 않는 것을 보장합니다.
    void setRadius(int r);
};

double Circle::getArea() const{
    return 3.14 * radius * radius;
    return 3.14 * getRadius() * getRadius(); // 이러면 getRadius를 호출하려면 const로 지정해야함
}
Circle::Circle():radius(1){}
Circle::Circle(int r):radius(r){}
int Circle:: getRadius() const { 
    return radius;
    //return radius++; 이딴건 당연히 error
}
void Circle::setRadius(int r){radius = r;}

int main()
{
    Circle donut;
    const Circle pizza; // 이러면 다 에러임

    std::cout<<donut.getRadius()<<std::endl;
    donut.setRadius(5);
    std::cout<<donut.getRadius()<<std::endl;    

    //std::cout<<pizza.getRadius()<<std::endl;
    //pizza.setRadius(5); //error, but OK
    std::cout<<pizza.getRadius()<<std::endl;  //얘는 대체 왜 error임?
    std::cout<<pizza.getArea()<<std::endl;
}