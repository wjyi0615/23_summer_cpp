#include <iostream>

int main()
{
    //int *p1, *p2;
    int *a[2];
    
    a[0] = new int[3]{1,2,3};
    a[1] = new int[3]{4,5,6};
    
    /* 이렇게 할당해도 된다
    int *a[2]{
        new int[3]{1,2,3},
        new int[3]{4,5,6}
    }
    */
   
    std::cout<< a[0][0] << ", "; 
    std::cout<< a[0][1] << ", "; 
    std::cout<< a[0][2] << "\n"; 
    std::cout<< a[1][0] << ", "; 
    std::cout<< a[1][1] << ", "; 
    std::cout<< a[1][2] << "\n"; 

    delete [] a[1];
    delete [] a[0];
}