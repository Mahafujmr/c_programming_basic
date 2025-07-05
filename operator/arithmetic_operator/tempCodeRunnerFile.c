// write a programme take integer value and display addtion sub. division, multi
#include<stdio.h>
int main()
{
 int num1,num2, result;
 printf("Enter Two Number:");
 scanf("%d %d",&num1, &num2);

 result = num1+num2;
 printf("The sum value = %d\n",result);
 result = num1 -num2;
 printf("The Subtract Value = %d\n",result);
 result = num1 *num2;
 printf("The Multiplie Value = %d\n",result);
 result = num1 / num2;
 printf("The Division value =%d\n",result);

    return 0;
}