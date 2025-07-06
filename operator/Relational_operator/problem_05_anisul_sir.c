// write a programme check large number 
#include<stdio.h>
int main()
{ 
    int num1 , num2;
    printf("Enter The First  Number:");
    scanf("%d",&num1);
 
    printf("Enter The Second  Number:");
    scanf("%d",&num2);

    if(num1>num2)
    printf("Large Number:%d\n",num1);

   else if(num1<num2)
    printf("large Number: %d\n",num2);
    else
    printf("The number are equal");
    return 0;
}