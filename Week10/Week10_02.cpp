#include <iostream>
using namespace std;
Circle::Circle():Circle(1){
    std::cout<<"Circle()"<<std::endl;
}
Circle::Circle(int r):r(r){

}
Circle::~Circle(){
    std::cout<<"~Circle()"<<std::endl;
}
double Circle::getArea(){return 3.14*r*r;}

int main(){
    Circle pizza(10);
    std::cout<<"--------------"<<std::endl;
    Circle donut;
    std::cout<<pizza.getArea()<<std::endl;
    std::
}