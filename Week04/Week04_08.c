#include <stdio.h>
#include <string.h>

/*
typedef struct rect{
    int cx;
    int cy;
} RECT;

int get_area(struct rect *p){
    return p->cx * (*p).cy;
}
*/


int main()
{
    char name[10] = "JANE";
    char a[10];
    //a = "KATE";
    /*
    a[0] = "KATE"[0];
    a[0] = "KATE"[1];
    a[0] = "KATE"[2];
    a[0] = "KATE"[3];
    a[0] = "KATE"[4];
    */
   strcpy(a, "Kate");
   
   printf("%s\n", a);

   //if(name == a)
   if(strcmp(name, a)==0){
     printf("same string!\n");
   } else{
    printf("NOT same string!\n");
   }
   return 0;
}
