#include <stdio.h>
int main()
{
    int a[2][3] = {{11, 12, 13},{14, 15, 16}};
    int (*p)[3] = a;
    int r = sizeof(a)/ sizeof(a[0]);
    int c = sizeof(a[0])/ sizeof(a[0][0]);
    int i, j;

    //
    for(i =0)

}