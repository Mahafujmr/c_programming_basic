// write a programme use data type scanf 
#include<stdio.h>
int main()
{
 int  roll;
 float result;
 char grade ;

 printf("Enter My Roll , Result and Grade :");
 scanf("%d, %f,%c",&roll,&result,&grade);
 printf("My Roll is %d,  Result %.2f , and Grade %c",roll, result,grade);



    return 0;
}