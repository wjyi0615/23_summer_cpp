//동적 메모리 할당 연습
//2차원이상 동적 메모리 할당임
//new 와 delete

#include <iostream>

int main()
{
    int *p1, *p2;
    int *a[2];
    
    p1 = new int[3]{1,2,3};
    p2 = new int[3]{4,5,6};

    std::cout<< p1[0] << ", "; //<< &p1[0] << ", ";
    std::cout<< p1[1] << ", "; //<< &p1[1] << ", ";
    std::cout<< p1[2] << "\n"; //<< &p1[2] << "\n ";
    std::cout<< p2[0] << ", "; //<< &p2[0] << ", ";
    std::cout<< p2[1] << ", "; //<< &p2[1] << ", ";
    std::cout<< p2[2] << "\n"; //<< &p2[2] << "\n ";

    delete [] p1;
    delete [] p2;
}

