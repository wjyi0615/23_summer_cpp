#include <iostream> 
using namespace std;

class Rectangle{
    public:
        int width;
        int height;
        int getArea();
};

int Rectangle::getArea(){
    int area = width * height;
    return area;
}

int main() {
    Rectangle rect;

    rect.width = 3;
    rect.height = 5;
    
    cout <<"사각형의 면적은 ";
    cout << rect.getArea() << endl;
}