#include <iostream>
using namespace std;

int add(int a, int b, int c) { 
    cout << "int add(int a, int b, int c) "<< endl;
    return a + b + c;
}
double add(double a, double b) {
    cout << "double add(double a, double b) "<< endl;
    return a + b;
}
int add(int a, int b) { 
    cout << "int add(int a, int b) "<< endl;
    return a + b;
}

int main(){
    cout << add(1,2) << endl;
    cout << add(2.0,3.0) <<endl;
    // cout << add(2,3.0) <<endl; //모호합니다~
    cout << "-------------------\n";
}