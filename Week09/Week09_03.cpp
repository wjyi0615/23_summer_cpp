//생성자 
//기본값을 갖게 만드는 도구
//1.생성자의 이름은 클래스 이름과 동일하다
//2.생성자는 리턴 타입이 없다.

#include <iostream>

class Circle{
    public:
        int r;
        double getArea();
        Circle();
        Circle(int r); // 어떻게든 자동으로 호출되긴함 그건 코드를 읽어봐야함
};

double Circle::getArea(){ return 3.14*r*r ; }

Circle::Circle(){ r = 1; } //생성자에 변수를 안넣으면 (초기화를 안하면) 알아서 만들어 주긴함

Circle::Circle(int rr){ r = rr; } ; //여러개의 생성자 가능(오버로딩) 다만 아예 똑같이는 못만듬

int main()
{
    Circle donut;
    Circle pizza(10);
    std::cout<<donut.getArea()<<std::endl;
    std::cout<<pizza.getArea()<<std::endl;
}