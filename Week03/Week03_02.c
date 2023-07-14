#include <stdio.h>

int main()
{
    int n = 11;
    int *p; //선언
    p = &n; //초기화
    // int *p = &n; 선언과 초기화를 동시에 (구별하자!)

    printf("%p\n", p);
    printf("%p\n", &p);
    printf("%p\n", n);
    printf("%p\n", &n);
    printf("-------------------\n");

    printf("%d\n", *p);
    printf("%d\n", ++*p);
    printf("%d\n", (*p)++);
    printf("%d\n", n);
    return 0;
}