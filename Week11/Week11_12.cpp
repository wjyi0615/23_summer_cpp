//객체 배열의 동적생성 예제
#include <iostream>
using namespace std;

class Circle {
    int r; 
public:
    Circle():r(1) {
        cout << "C(): " << r << endl;
    }
Circle(int r):r(r) {
    cout << "C(r): " << r << endl;
    }
~Circle() {
    cout << "~C(): " << r << endl;
    }
void setRadius (int r) { this->r = r; }
double getArea () { return 3.14*r*r; }
};

int main(){
    Circle *p= new Circle[3]{
        Circle(), Circle(20), Circle(30)
    };
    
    for(int i =0; i<3; i++)
        cout << p[i].getArea()<< endl;
    delete [] p;
}