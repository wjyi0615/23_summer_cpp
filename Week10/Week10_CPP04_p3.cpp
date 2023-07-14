#include <iostream>
using namespace std;

class Circle {
public:
    int r;
    Circle();
    Circle(int r);
    ~Circle();
    double getArea ();
};

Circle gooDonut(100);
Circle gooPizza(200);
Circle *hDonut, *hPizza;

int foo() {
    cout << "=> start foo()" << endl;
    Circle fooDonut (10);
    Circle fooPizza(20);
    hDonut = new Circle (30);
    cout << "=> end foo()" << endl;
    return 0;
}
int main() {
    cout << "=> start main()" << endl;
    Circle mainDonut (1000);
    hPizza = new Circle;
    delete hPizza;
    Circle mainPizza (2000);
    foo();
    delete hDonut;
    cout << "=> end main()" << endl;
}