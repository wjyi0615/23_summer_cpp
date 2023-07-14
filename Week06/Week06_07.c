#include <stdio.h>

#pragma pack(push, 1) //
typedef struct study {
    int id;
    char pass;
    char *name;
}STUDY;
#pragma pack(pop);

typedef struct study2 {
    int id;
    char pass;
    char *name;
}STUDY2;

int main()
{
    struct study a1;
    struct study a2;
    printf("%d\n", sizeof(a1));
    printf("%d\n", sizeof(a2));
    return 0;
}
