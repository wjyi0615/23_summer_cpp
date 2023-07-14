#include <iostream>

int main(){
    const int n =5;

    int *p = &n; //error

    std::cout<< *p << std::endl;
}