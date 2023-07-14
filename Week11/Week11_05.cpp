#include <iostream>

int main(){
    int n =5;
    const int * p = &n;
    const int &r = n;

    // r++     //error
    //(*p)++   //error
    // r = 10; //error
    //*p = 10; //error

    n++;

    std::cout<< n << std::endl;
    std::cout<< *p << std::endl;
    std::cout<< r << std::endl;
}