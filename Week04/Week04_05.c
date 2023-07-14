// week04_04 긴 switch 문을 없애보자

#include <stdio.h>

int get_cpu(int *val){*val = 0x01; return 0; }
int get_motor(int *val){*val = 0x02; return 0; }
int get_sens(int *val){*val = 0x03; return 0; }
int get_uv(int *val){*val = 0x04; return 0; }
int get_idle(int *val){*val = 0x09; return 0; }

int main()
{
   int t = 0;
   int status;

   int (*tasks[])(int *val)={ get_cpu, get_motor, get_sens, get_uv, get_idle};

   int n = sizeof(tasks)/sizeof(*tasks);
   while(t < 0xFF){
      tasks[t++%n](&status);
      printf("status is %x\n", status);
      }
 return 0;
}