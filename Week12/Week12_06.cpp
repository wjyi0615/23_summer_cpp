#include <iostream>


int main()
{
    int rows=2, cols=3;

    int *a = new int[2*3]; //이렇게 선언하면 좀 더 잘 보이는듯
    //int (*a)[3] = (int (*)[3])p;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            a[i*cols + j] = i*cols + j + 1;
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            std::cout << a[i*cols + j] << " ";
        }
        std::cout<< std::endl;
    }

    delete [] a;
}