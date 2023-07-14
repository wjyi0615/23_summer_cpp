#include<iostream>
using namespace std;

class A{
public:
    int a;
    //동적바인딩
    virtual void foo(){ cout<< "A is "<< a << endl; }
    A():a(0xA){ cout<<"A() " << this <<endl; }
    //소멸자도 virtual 선언하자
    virtual ~A(){ cout<<"~A() "<< this <<endl; }
};

class B : public A{
public:
    int b;
    void foo(){cout<< "B is "<< b << endl;}
    B():b(0xB){ cout<<"B() " << this <<endl; }
    ~B(){ cout<<"~B() "<< this <<endl; }
};

class C : public B{
public:
    int c;
    void foo(){cout<< "C is "<< c << endl;}
    C():c(0xC){ cout<<"C() " << this <<endl; }
    ~C(){ cout<<"~C() "<< this <<endl; }
};

int main()
{
    A a;
    B b;
    C c;
    cout << "---------\n";
    A *pa = new A;
    cout << "---------\n";
    A *pb = new B;
    cout << "---------\n";
    A *pc = new C;
    cout << "---------\n";
    pa -> foo();
    pb -> foo();
    pc -> foo();

    cout << "=========\n";
    delete pc;
    cout << "---------\n";
    delete pb;
    cout << "---------\n";
    delete pa;
}