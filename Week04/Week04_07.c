#include <stdio.h>

typedef struct rect{
    int cx;
    int cy;
} RECT;
// typedef struct rect RECT;

int get_area(struct rect r){
    return r.cx * r.cy;
}

int main()
{
    struct rect r1 = {10,20};
    RECT r2 = r1;
    //struct rect r2 = r1;
    r1.cx = 10;
    r1.cy = 20;

    printf("the area is %d\n", r1.cx * r1.cy);
    printf("the area is %d\n", r2.cx * r2.cy);
    return 0;
}