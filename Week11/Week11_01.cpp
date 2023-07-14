#include <iostream>
int f(){
    #define x 10
    return x;
}

int g(){
    #define x 20
    return x;
}

int main(){
    std::cout<< x<<std::endl;
    std::cout<< f()<<std::endl;
    std::cout<< g()<<std::endl;
    std::cout<< x+f()<<std::endl;
    std::cout<< x+g()<<std::endl;
    //뭔지 알 수 없으니 const지시자를 사용하자
}