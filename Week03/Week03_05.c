#include <stdio.h>
int main()
{
    int a[2][3] = {{11, 12, 13},{14, 15, 16}};
    int (*p)[3] = a;
    
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(*a));
    printf("%d\n", sizeof(a[0]));
    printf("%d\n", sizeof(p));
    printf("%d\n", sizeof(*p));
    printf("%d\n", sizeof(p[0]));;
    printf("---------------------\n");

    printf("%d\n", sizeof(a)/sizeof(*a));
    printf("%d\n", sizeof(a)/sizeof(a[0])); //배열의 원소의 갯수

    return 0;
}