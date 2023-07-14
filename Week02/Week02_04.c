#include <stdio.h>

int main()
{
    char s[3][5]={"kate", "ios", "ux"};

    printf("%s\n", s[0]); //char(*)[5]
    printf("%s\n", s[1]);
    printf("%s\n", s[2]);
    printf("--------------\n");

    printf("%p\n", s[0]);  //s[0]는 char * 타입
    printf("%p\n", s[1]);
    printf("%p\n", s[2]);
    printf("--------------\n");

    printf("%d\n", sizeof(s[0]));
    printf("%d\n", sizeof(s));
    printf("%d\n", sizeof(*s));
    printf("%d\n", sizeof(**s));
    printf("%d\n", sizeof(*s+1));
    printf("%d\n", sizeof(**s+1));
    printf("--------------\n");
}