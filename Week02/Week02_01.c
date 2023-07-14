#include <stdio.h>
int g = 1;

int f(int x)
{
    int r = x*x;
    return r;
}

int main()
{
    int r = 3;
    printf("%d\n", f(r));
    printf("%p\n", r);
    printf("%p\n", &r);
    
    printf("%p\n", f);
    printf("%p\n", main);
    return 0;
}