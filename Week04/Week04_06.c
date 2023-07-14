#include <stdio.h>

typedef int INT_32;

struct rect{
    int cx;
    int cy;
};

tyepdef int a[3];

int main()
{
    INT_32 n = 2;
    int b[] = {11, 12, 13};
    printf("%d\n", b[1]);

    return 0;
}
