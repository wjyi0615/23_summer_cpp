#include <iostream>
class Circle{
    int r;
public:
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
};


int main(){
    Circle a[3] = {Circle(5),Circle(10),};
    Circle *p = a;
    
    /*
    std::cout<< (*p++).getArea()<<std::endl;
    std::cout<< (*p++).getArea()<<std::endl;
    std::cout<< (*p).getArea()<<std::endl;
    std::cout<<"------------"<<std::endl;
    */
    
    std::cout<<p++->getArea()<<std::endl;
    std::cout<<p++->getArea()<<std::endl;
    std::cout<<p->getArea()<<std::endl;


}