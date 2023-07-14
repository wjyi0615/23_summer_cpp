#include <iostream>
using namespace std;

class Rect{
public:
    int width, height;
    Rect();
    Rect(int w, int h);
    Rect(int length);
    bool isSqaure();    
}
Rect::Rect(){width= height=1;}
Rect::Rect(int w, int h):width(w), height(h){}
Rect::Rect(int length){ width=height=length;}
bool Rect::isSqaure(){
    if(width==height)return true; 
    else return false;
}
int main(){
    Rect rect1;
    Rect rect2(3, 5);
    Rect rect3(3);

    if(rect1.isSquare())
        cout << "rectl is square!" << endl;
    if(rect2.isSquare())
        cout << "rect2 is square!" << endl;
    if(rect3.isSquare())
        cout << "rect3 is square!" << endl;
}
