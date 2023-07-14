#include <stdio.h>

int main()
{
    int n = 0x01020304;
    unsigned char *p = (unsigned char *)&n;
    printf("%p\n", &n);
    printf("%p\n", n);
    printf("%p\n", p[0]);
    printf("%p\n", p[1]);
    printf("%p\n", p[2]);
    printf("%p\n", p[3]);
    
    return 0;
}