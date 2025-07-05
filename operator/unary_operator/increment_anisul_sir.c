// write a programme increment and decrement 
#include<stdio.h>
int main()
{
  int a = 10;
  int b = a++;
  printf("a = %d\n",a);
  printf("b = %d\n",b);
  printf("Increment\n");


   int m = 10;
  int n = ++m;
  printf("m = %d\n",m);
  printf("n = %d\n",n);

    printf("Decrement\n");
     int t = 10;
  int v = t--;
  printf("t = %d\n",t); //t= 9
  printf("v = %d\n",v);

   printf("Decrement\n");
     int o = 12;
  int p = --o;
  printf("o = %d\n",o); //0 =11
  printf("p = %d\n",p);

    return 0 ;
}