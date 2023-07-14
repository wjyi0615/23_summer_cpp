#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int x = 10, y = 20;
    cout<< "x is "<< x << ", y is "<< y << endl;
    swap(&x,&y);
    cout<< "x is "<< x << ", y is "<< y << endl;
    return 0;
}