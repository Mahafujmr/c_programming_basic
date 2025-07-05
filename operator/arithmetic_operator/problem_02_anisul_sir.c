// write  a programme two number addition and half division
#include<stdio.h>
int main()
{

    int num1, num2, sum;
    float  divided;
    printf("Enter The Number :");
    scanf("%d %d",&num1,&num2);
    sum =num1+num2;
    printf("The sum Number is =%d\n",sum);
    divided = (float) sum/2; // daya type change means - type casting
    printf("The Divided Number = %.2f\n",divided);

    return 0;
}