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
    B b;
    C c;
    cout << "---------\n";
    A *p1 = &a;
    A *p2 = &b;
    A *p3 = &c;
    A &ra = a;
    B &rb = b;
    C &rc = c;

/*
    a.foo();
    b.foo();
    c.foo();
    
    포인터 지정
    p1->foo();
    p2->foo();
    p3->foo();
    */
    //레퍼런스 지정
    ra.foo();
    rb.foo();
    rc.foo();

    cout << "---------\n";


}