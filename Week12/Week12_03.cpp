#include <iostream>

int main()
{
    //레기드 배열(ragged array), 이상한 배열이다
    int *a[3];
    
    a[0] = new int[2]{1,2};
    a[1] = new int[4]{4,5,6,7};
    a[2] = new int[3]{8,9,0};
   
    std::cout<< a[0][0] << ", "; 
    std::cout<< a[0][1] << ", "<< "\n"; 
    std::cout<< a[1][0] << ", "; 
    std::cout<< a[1][1] << ", "; 
    std::cout<< a[1][2] << ", "; 
    std::cout<< a[1][3] << "\n"; 
    std::cout<< a[2][0] << ", "; 
    std::cout<< a[2][1] << ", "; 
    std::cout<< a[2][2] << "\n"; 

    delete [] a[2];
    delete [] a[1];
    delete [] a[0];
}