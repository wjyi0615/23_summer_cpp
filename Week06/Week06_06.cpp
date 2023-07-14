#include <iostream>
using namespace std;

void swap(int &a, int &b){ 
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int x = 10, y = 20;
    int *p = &x;
    cout<< "x is "<< x << ", y is "<< y << endl;
    swap(*p,y);
    cout<< "x is "<< x << ", y is "<< y << endl;
    return 0;
}