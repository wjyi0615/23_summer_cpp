#include <iostream>

//함수 오버로딩
int add(int a, int b, int c =100){
    return a+b+c;
}

double add(double a, double b){
    return a+b+10.0;
}

int main()
{
    //char *s ="KU";
    std::cout<<"Hello World!"<< add(1,2) <<std::endl;
    std::cout<<"Hello World!"<< add(1.0,2.0) <<std::endl;
    return 0;
}