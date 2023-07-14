#include <iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    int r;
    Circle():radius(1){cout<<"C() "<< this <<endl;}
    Circle (int r):radius(r){cout<<"C(int) "<< this <<endl;}
    ~Circle(){cout<<"~C() "<< this <<endl;};
    Circle(const Circle &c){cout<<"C(&)"<<this<<endl;}

    double getArea(){return 3.14* radius * radius;};
};

Circle getCircle(int n){
    std::cout<< "start ... getCircle()"<<std::endl;
    Circle t1(4);
    Circle t2(3);
    return(n%2) ? t2 : t1;
    //return t1;
}

char& find_r(char s[], int index){
    return s[index];
}

char find_c(char s[], int index){
    return s[index];
}

int main()
{
   char name[] = "Mike";
   std::cout << name << std::endl;
   std::cout << find_r(name, 0) << std::endl;
   std::cout << find_c(name, 0) << std::endl;
   //find_c(name,0) = 'N'; //error
   find_r(name, 0) = 'N';
   std::cout<< find_c(name,0) << std::endl;
   std::cout << name << std::endl;
}