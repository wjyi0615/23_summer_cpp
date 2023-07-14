#include <iostream>
using namespace std;

struct Circle {
    int r;
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
};

Circle::Circle():r(1){
    
}
Circle::Circle(int r):r(r){

}
Circle::~Circle(){

}
double Circle::getArea(){return 3.14*r*r;}
int main(){
    Circle donut(100);
    std::cout<<donut.getArea()<<std::endl;
}