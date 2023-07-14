#include <iostream>

class Circle{
    public:
        int r = 0 ; //가능해짐
        int x; 
        int y;
        double getArea();
        //Circle();
        //디폴트 생성자를 만들지 않으면
        Circle(int r, int x, int y); 
};

double Circle::getArea(){ return 3.14*r*r ; }
/*
Circle::Circle():Circle(1, 0, 0){ 
    std::cout<<"Circle()"<<std::endl;
}
*/

Circle::Circle(int r, int x, int y):r(r),x(x),y(y){  
    std::cout<<"Circle(int)"<<std::endl;
} 

int main()
{
    Circle donut;
    Circle pizza(10, 2, 2);
    std::cout<<donut.x<<donut.y<<":"<<donut.getArea()<<std::endl;
    std::cout<<pizza.x<<pizza.y<<":"<<pizza.getArea()<<std::endl;
}