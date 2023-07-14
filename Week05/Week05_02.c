#include <stdio.h> 
#include <stdlib.h>

int compare_score(const void *a, const void *b)
{
return *(int *)a - *(int *)b;
}

int main()
{
int scores[] = {95, 46, 62, 88, 77, 73, 84, 33, 54, 91};
int i;
qsort(scores, sizeof (scores)/sizeof(int), sizeof(int),
compare_score);
for(i = 0; i < sizeof (scores)/sizeof(int); i++) {
printf("%d ", scores[i]);
}
return 0;
}