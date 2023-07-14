#include <stdio.h>

// 행렬처럼 출력해보자
// int printMatrix(int (*a)[3], int n) 아랫것과 같음
int printMatrix(int a[][3], int n)
{
   int c = sizeof(int [3])/sizeof(int);
   int i, j;
   for(i=0; i<n; i++)
   {
    for(j=0; j<3; j++)
    {
        printf("%2d ", a[i][j]);
    }
    printf("\n");
   }
}

int main()
{
    int a[][3] = {{11,12,13},{14,15,16}};
    //int (*p)[3] = a;
    printf("%d\n", a[0][2]);
    printMatrix(a, sizeof(a)/sizeof(a[0]));
    return 0;
}