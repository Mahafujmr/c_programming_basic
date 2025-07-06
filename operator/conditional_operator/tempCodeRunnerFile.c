// write a programme conditional operator
#include<stdio.h>
int main()
{
    int num1, num2, large;
    printf("Enter the Number:");
    scanf("%d %d",&num1, &num2);
    large = num1<num2 ? num1 : num2;
    printf("Enter The Result = %d",large);
    return 0 ;
}