#include<iostream>
using namespace std;

class A{
public:
    int a;
    void foo(){ cout<< "A is "<< a << endl; }
    A():a(0xA){ cout<<"A() " << this <<endl; }
    ~A(){ cout<<"~A() "<< this <<endl; }
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
    a.foo();
    cout << "---------\n";

    B b;
    b.foo();
    cout << "---------\n";

    C c;
    c.foo();
    cout << "---------\n";
}