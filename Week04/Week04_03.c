#include <stdio.h>

int main()
{
    int x[2]={11, 12};
    int y[4]={21, 22, 23, 24};
    int z[3]={31, 32, 33};

    int *a[3];
    a[0] = &x; // a[0], a[1], a[2]는 메모리가 연속적이지만
    a[1] = &y; // 
    a[2] = &z;

    printf("%p\n", a[0]);
    printf("%p\n", a[1]);
    printf("%p\n", a[2]);
    printf("%d\n", a[0][1]);
    printf("%d\n", a[1][1]);
    printf("%d\n", a[2][1]);
}
