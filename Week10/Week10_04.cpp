#include <iostream>
using namespace std;

class Circle {
private:
    int r;
public:
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();

    int getR() const;
    bool setR(int r);
};
// ... 채워보기
Circle::Circle() {
    r = 0;  // Set default radius to 0
}

Circle::Circle(int r) {
    if (r < 0) {
        cout << "Invalid radius. Setting radius to 0." << endl;
        this->r = 0;  // Set radius to 0 if invalid value is provided
    } else {
        this->r = r;
    }
}

Circle::~Circle() {
    // Destructor code (if any)
}

double Circle::getArea() const {
    return 3.14159 * r * r;  // Formula for area of a circle: pi * r^2
}

int Circle::getR() const{ return r;}

bool Circle::setR(int val){
    if(val<0)return false;
    // ... 채워보기
    r= val;
    return true;
}

int main(){
    Circle waffle;
    waffle.setR(-2);
    cout << waffle.getR() << endl;
}