#include <stdio.h>

// 함수들이 인자를 받을때 
// c언어는 배열의 원소의 갯수를 알수 없다 -> 포인터만 받기때문
// 원칙적으로는 배열자체를 전달 할수는 없다
// 다른배열을 만들어서 정보를 얻고 사용함

//int findMAX(int *a, int n) 원래는 이렇게 써야되는데 함수의 매개변수 일때는 자동으로 바꿔줌

int findMAX(int a[], int n)
{
  int i, max_val = a[0];
  a++;


}

int main()
{
    int a[] = {12,2,13,35,14,7};
    int r = findMax(a, sizeof(a)/sizeof(a[0]));
    printf("%d is max value");

    return 0;
}