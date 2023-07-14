#include <stdio.h>
#include <string.h>

int compare_aa(const void *a, const void *b)
{
    return strcmp((char*)a, (char*)b);
}


int main()
{
    char a[][5] = {"john", "bob", "kate"};

    qsort(a, sizeof(a)/sizeof(*a), sizeof(*a), compare_aa);
    for(int i = 0; i<sizeof(a)/sizeof(*a); i++){
        printf("%s\n", a[i]);
    }
}