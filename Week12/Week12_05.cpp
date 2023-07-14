#include <iostream>
//CCP05 p16 그림내용

int main()
{
    int rows, cols;

    std::cout << "input row nums: ";
    std::cin >> rows;
    std::cout << "input cols nums: ";
    std::cin>> cols;

    int **a = new int*[rows];
    
    //얘가 젤 주용함
    for(int i=0; i<rows; i++){
        a[i] = new int [cols];
    }
    // 얘도 개애애ㅐㅐㅐ 중요함
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            a[i][j] = i*cols + j + 1;
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            std::cout << a[i][j] << " ";
        }
        std::cout<< std::endl;
    }

    for(int i = 0; i<cols; i++){
        delete [] a[i];
    }
    delete [] a;
}