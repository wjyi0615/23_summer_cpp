#include <stdio.h>
#include <string.h>

int main()
{
    const int n = 3; // const로 했으므로 read only임
    /*const*/ //int *p;
    //p = &n;
    int k = 10;
    const int *p = &n; //선언 동시에 초기화

    //printf("%d\n", *p =4);
    printf("%d\n", *p);
    p = &k;
    printf("%d\n", *p);

    return 0;
}