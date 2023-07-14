#include <stdio.h>

int main(){
    int n = 3;
    int* *p = &n;
    void *vp = &n;

    printf("%d\n", *p);
    printf("%d\n", *(int*)vp);

    return 0;
}