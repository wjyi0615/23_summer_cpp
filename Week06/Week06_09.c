#include <stdio.h>

union payload{
    int n;
    short s;
    char c;
    char a[4];
};

int main()
{
    union payload mydata;
    mydata.n = 0x01020304;
    printf("%x\n", mydata.n);
    printf("%x\n", mydata.s);
    printf("%x\n", mydata.c);
    printf("%p\n", mydata.a);
    printf("%x\n", mydata.a[0]);
    printf("%x\n", mydata.a[1]);
    printf("%p\n", &mydata);
    printf("%p\n", &mydata.n);
    
}