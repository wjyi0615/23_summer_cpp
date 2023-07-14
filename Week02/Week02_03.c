#include <stdio.h>

int main()
{
    char *s[3]={"hi", "kim", "choi"};

    printf("%s\n", s[0]);
    printf("%s\n", s[1]);
    printf("%s\n", s[2]);
    printf("--------------\n");

    printf("%p\n", s[0]);
    printf("%p\n", s[1]);
    printf("%p\n", s[2]);
    printf("--------------\n");

    printf("%d\n", sizeof(s[0]));
    printf("%d\n", sizeof(s));
    printf("%d\n", sizeof(*s));
    printf("%d\n", sizeof(**s));
    printf("--------------\n");

    return 0;
}