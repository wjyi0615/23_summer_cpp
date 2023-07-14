//바인딩(binding)

#include <iostream>


int main(){
    int n;
    std::cin >> n;
    const int x = n ;
    //constexpr int x = n  //에러임; 
    //이러면 컴파일 시간에 보장됨
    std::cout << x << std::endl;
    //컴파일이 아니라 런타임에서 수가 결정된다.
}