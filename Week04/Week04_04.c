#include <stdio.h>
int get_cpu(int *val){*val = 0x01; return 0; }
int get_motor(int *val){*val = 0x02; return 0; }
int get_sens(int *val){*val = 0x03; return 0; }
int get_idle(int *val){*val = 0x09; return 0; }

int main()
{
   int t = 0;
   int status;

   int (*task)(int *val);

   while(t < 0xFF){
      switch(t%4){
      case 0:
         task = get_cpu;
         //get_cpu(&status);
         break;
      case 1:
         task = get_motor;
         //get_motor(&status);
         break;
      case 2:
         task = get_sens;
         //get_sens(&status);
         break;
      case 3:
         task = get_idle;
         //get_idle(&status);
         break;
      }
   //(*task)(&status);
   task(&status);
   printf("cpu status is %x\n", status);
   t++;
   }
 return 0;

}