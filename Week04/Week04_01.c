#include <stdio.h>

int main()
{
    int *a[3];
    int(*p)[3];
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(p));
    return 0;
}