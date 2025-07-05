// assignment operator
#include<stdio.h>
int main()
{
    int a = 10;
    a+=5; // a = a+5 , a = 10+5 =15
    printf("%d\n",a);
    a -=2; // a = 15, a= a-2 , a= 15-2, 13
      printf("%d\n",a);
      a *= 2; // a =13, a = a*2 , a = 13*2 , a=26
         printf("%d\n",a);
         a /= 2; // a = 26, a = a/2, a = 26/2c, a =13
         printf("%d\n",a);
    return 0;
}