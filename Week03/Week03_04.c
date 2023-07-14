#include <stdio.h>

int main()
{
   int a[2][3] = {{11, 12, 13},{14, 15, 16}};
   int (*p)[3] = a;

   printf("%p\n", p);
   printf("%p\n", &p);
   printf("%p\n", a);
   printf("%p\n", &a);
   printf("------------------\n");

   printf("%p\n", a+1);
   printf("%p\n", p+1);
   printf("------------------\n");

   printf("%p\n", *(a+1));
   printf("%p\n", *(p+1));
   printf("%p\n", a[1]);
   printf("%p\n", p[1]);
   printf("------------------\n");

   printf("%p\n", *(a+1)+1);
   printf("%p\n", *(p+1)+1);
   printf("%p\n", a[1]+1);
   printf("%p\n", p[1]+1);
   printf("------------------\n");

   printf("%d\n", *(a+1)+1);
   printf("%d\n", *(p+1)+1);
   printf("%d\n", a[1]+1);
   printf("%d\n", p[1]+1);
    

   return 0;
}