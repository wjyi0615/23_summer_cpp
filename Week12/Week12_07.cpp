#include <iostream>


int main()
{
    int rows=2, cols=3;

    int *p = new int[2*3]; 
    int (*a)[3] = (int (*)[3])p; //이렇게 치면 열의 갯수가 고정된다

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            a[i][j] = i*cols + j + 1;
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            std::cout << a[i][j] << " "<< &a[i][j] << " ";
            //메모리 공간이 연속적인 것을 확인 할 수 있다.
        }
        std::cout<< std::endl;
    }

    delete [] p;
}