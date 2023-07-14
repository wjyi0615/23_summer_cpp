#include <stdio.h>

int main()
{
   int a[3] = {11, 12, 13};
   int *p = &a;

   printf("%p\n", p);
   printf("%p\n", &p);
   printf("%p\n", a);
   printf("%p\n", &a);
   printf("------------------\n");
   printf("%p\n", a+0);
   printf("%p\n", a+1);
   printf("%p\n", a+2);
   printf("%p\n", p+0);
   printf("%p\n", p+1);
   printf("%p\n", p+2);
   printf("------------------\n");

   printf("%d\n", *(a+0)); // ==a[0]
   printf("%d\n", *(a+1)); // ==a[1]
   printf("%d\n", *(a+2)); // ==a[2]
   printf("%d\n", *(p+0)); 
   printf("%d\n", *(p+1)); 
   printf("%d\n", *(p+2)); 
   printf("------------------\n");

   printf("%d\n", a[0]);
   printf("%d\n", a[1]);
   printf("%d\n", a[2]);
   printf("%d\n", p[0]);
   printf("%d\n", p[1]);
   printf("%d\n", p[2]);
   printf("------------------\n");
   
   //printf("%d\n", *p++);
   //printf("%d\n", *++p); //포인터가 바뀌어있다
   //printf("%d\n", *p++=1);
   //printf("%d\n", *++p=1);
   //printf("%d\n", *a++);  배열의 이름은 첫번째 포인터를 가르키는것이지 modify가능하지는 않다 
   //printf("%d\n", *++a);
   printf("%d\n", *p++); // 진짜 많이 쓴데요
   printf("%d\n", (*p)++); //이것도 다음으로 많이 쓴다함
   printf("%d\n", *p++);
   printf("%d\n", ++*p);
   printf("%d\n", ++*p++);
   printf("%p\n", p);
   //포인터가 바뀌었는데 배열 원소가 바뀌었는지 확인하고 고민해보자
   printf("------------------\n");

   return 0;
}