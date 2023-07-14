#include <stdio.h>

int main()
{
    int x=1 , y=2, z=3;
    int *a[3];
    a[0] = &x;
    a[1] = &y;
    a[2] = &z;

    printf("%p\n", a[0]);
    printf("%p\n", a[1]);
    printf("%p\n", a[2]);
    printf("%d\n", *a[0]);
    printf("%d\n", *a[1]);
    printf("%d\n", *a[2]);
    
    return 0;
}