#include <iostream>

class Circle{
    public:
        int r, x, y;
        double getArea();
        Circle();
        Circle(int r, int x, int y); // 어떻게든 자동으로 호출되긴함 그건 코드를 읽어봐야함
};

double Circle::getArea(){ return 3.14*r*r ; }

Circle::Circle():Circle(1, 0, 0){ 
    std::cout<<"Circle()"<<std::endl;
}

Circle::Circle(int rr, int xx, int yy){  //위임생성자 C+11부터라는데 왜 안되누..
    r = rr;
    x = xx;
    y = yy;
    std::cout<<"Circle(int)"<<std::endl;
} 

int main()
{
    Circle donut;
    Circle pizza(10, 2, 2);
    std::cout<<donut.getArea()<<std::endl;
    std::cout<<pizza.getArea()<<std::endl;
}