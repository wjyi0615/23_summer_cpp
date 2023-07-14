#include <stdio.h>

int main()
{
int a[2][3] = {11, 12, 13, 14, 15, 16}; // 이 배열의 원소의 갯수는 2개다 잊지말자

printf("%p\n", a); // 타입: int (*) [3]
printf("%p\n", &a[0]);
printf("%p\n", &a);
printf("--------------\n");
printf("%p\n", a+1);
printf("%p\n", &a[0]+1);
printf("%p\n", &a+1);
printf("--------------\n");
printf("%p\n", sizeof(a)); 
printf("%p\n", sizeof(a+0)); // *(a+0) 와 결과가 같다.
printf("%p\n", sizeof(a[0]));
printf("%p\n", sizeof(*a));
printf("%p\n", sizeof(&a));
printf("--------------\n");

printf("%p\n", a);
printf("%p\n", *a);
printf("%p\n", *a+1);
printf("%p\n", *a[0]+1); // 원소 11 + 1이 찍힘
printf("%p\n", *(a+1));  // 원소 14의 포인터
printf("--------------\n");

printf("%p\n", *(a+1)+1); //두번째 원소의 포인터 -> 두번째원소의의 두번째 포인터
printf("%p\n", a[1]+1); 
printf("%p\n", **(a+1)+1);  
printf("--------------\n");

printf("%p\n", a[0]+1); 
printf("%p\n", a[1]+1); 
printf("--------------\n");

}