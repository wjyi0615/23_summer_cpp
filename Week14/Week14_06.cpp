#include <iostream>

using namespace std;

class Employ {
public:
    static int count;
    int number;
    std::string name;
    long salary;
    
    void printData(){
        cout << number<< ', ' << name << ', '<< salary<< endl;
    }

    Employ (std::string name ="emp", long incentive = 0):salary(100+ incentive),name(name){ 
        number = ++count;
    }
};

class SalesPerson: public Employ{};

class Engineer:public Employ{
public:
    void foo() {
        cout<< "I'm Researching!"<< endl;
    }
};

int Employ::count=0;

int main()
{
    Employ emp1, emp2("John", 20);
    SalesPerson sales1;
    Engineer eng1;

    emp1.printData();
    emp2.printData();
    sales1.printData();
    eng1.printData();

    //emp1.foo();
    //sales1.foo();
    eng1.foo();
}