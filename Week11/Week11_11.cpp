
void Circle::setRadius(int r){
    radius = r;
}

int main()
{
    Circle = *p; //c는 초기화하면서 동시에 할당이 불가능
    //int *pn = new int(10);
    int *a = new int[3]{11,12,13}
    p = new Circle(5); //direct initialization

    p = new Circle;

    std:cout<< p->getArea() << std::endl;
    std:cout<< *pn << std::endl;

    delete p;
    delete pn;
}