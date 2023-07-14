#include <iostream>

using namespace std;

class Employee {
public:
    static int count;
    int number;
    std::string name;
    long salary;
    
    void printData(){
        cout << number<< " , " << name << " , "<< salary<< endl;
    }

    Employee (std::string name ="emp", long incentive = 0):salary(100+ incentive),name(name){ 
        number = ++count;
    }
};

class SalesPerson: public Employee{};

class Engineer:public Employee{
public:
    void foo() {
        cout<< "I'm Researching!"<< endl;
    }
};

int Employee::count=0;

int main()
{
    Employee emp1("John", 20);
    SalesPerson emp2;
    Engineer emp3;

    Employee *p1= &emp1;
    Employee *p2= &emp2;
    Employee *p3= &emp3;

    //Employee *a[4]{&emp1, &emp2, &emp3};
    //갯수가 정해지지 않은 배열로 선언할 때
    Employee *a[]{
        new Employee("John", 20),
        new SalesPerson,
        new Engineer
    };

    a[0]->printData();
    a[1]->printData();
    a[2]->printData();

    p1->printData();
    p2->printData();
    ((Engineer*)p3)->foo();

    delete a[2];
    delete a[1];
    delete a[0];
}