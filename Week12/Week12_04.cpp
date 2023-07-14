#include <iostream>
//CCP05 p16 그림내용

int main()
{
    int rows = 2, cols = 3;
    int **a = new int*[rows];
    
    a[0] = new int[3]{1,2,3};
    a[1] = new int[3]{4,5,6};
   
    std::cout<< a[0][0] << ", "; 
    std::cout<< a[0][1] << ", "; 
    std::cout<< a[0][2] << "\n"; 
    std::cout<< a[1][0] << ", "; 
    std::cout<< a[1][1] << ", "; 
    std::cout<< a[1][2] << "\n"; 

    delete [] a[1];
    delete [] a[0];
    delete [] a;
}