#include <iostream>
using namespace std;
static int g = 0;

class Person {
public:
    int money;
    void addMoney(int money){
         sMoney += 1;
         this->money += money; 
         }

    static int sMoney;
    static void addSMoney(int money){ 
        // money += n; // 
        sMoney += money; 
        }
};

int Person::sMoney = 1000; // 없으면 에러

int main()
{
    Person one;
    one.money = 100;
    Person two;
    two.money = 200;

    std::cout<<one.money<<std::endl;
    std::cout<<one.sMoney<<std::endl; //data 영역
    one.addSMoney(10);
    std::cout<<two.money<<std::endl;
    std::cout<<two.sMoney<<std::endl; //two의 s영역이 아니다.
    two.addSMoney(10);
    Person::addSMoney(5);
    //std::cout<<Person::money<<std::endl;
    std::cout<<Person::sMoney<<std::endl;
}
