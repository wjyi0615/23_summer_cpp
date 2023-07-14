#include <stdio.h>
#include <string.h>

int main()
{
    const int n = 3; // const로 했으므로 read only임
    int k = 10;
    int * const p = &n; //

    (*p)++;

    //printf("%d\n", *p =4);
    printf("%d\n", n);
    p = &k;
    printf("%d\n", *p);

    return 0;
}