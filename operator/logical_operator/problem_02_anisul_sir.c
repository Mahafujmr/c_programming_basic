// write a programme read 3 number and display maximum number
#include<stdio.h>
int main()
{
    int num1, num2,num3;
    printf("Enter The Number:");
    scanf("%d %d %d",&num1,&num2,&num3);

    // use logical operator 
    if(num1>num2 && num1>num3)
    printf("Large Number section one = %d",num1);
    // also statement use else if
    else if (num2>num1 && num2 >num3)
    printf("The large Number section two  = %d",num2);
    else if (num3>num1 && num3>num2)
    printf("The Large Number section three  = %d",num3);
    else
    printf("Large number is Empty");
    return 0;
}