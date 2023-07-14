#include <iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    int r;
    Circle():radius(1){std::cout<<"C() "<< this <<std::endl;}
    Circle (int r):radius(r){std::cout<<"C(int) "<< this <<std::endl;}
    ~Circle(){std::cout<<"~C() "<< this <<std::endl;};
    double getArea(){return 3.14* radius * radius;};
};

bool average( int a[], int n, double &avg)
{
    if(n<=0) return false;
    int s{0};
    for(int i = 0; i<n; i++){
        s+= a[i];
    }
    avg = (double)s/n;
    return true;
}
int main()
{
    int a[] = {10, 11, 12, 13, 14, 15};
    double avg = 0.0;
    
    if(average(a, sizeof(a)/sizeof(*a), avg) == true){
        std::cout << avg << std::endl;
    }
    else{
        std::cout << "None" << std::endl;
    }
}