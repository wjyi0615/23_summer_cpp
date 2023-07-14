#include <iostream>

int main(){
    int n =10;
    int m =20;

    int * const p = &n; //n 접근하는건 read only임


    // r++ ;    //error
    // r = 10; //error
    //*p = 10; //error

    (*p)++;   // not error
    p = &m; //error
    n++;

    std::cout<< n << std::endl;
    std::cout<< m << std::endl;
    std::cout<< *p << std::endl;
}