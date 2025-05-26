/*
write a programme prints scanf and output result show
*/
#include<stdio.h>
int main()
{
    int age;
    float result;
    printf("Enter my Output reslut: ");
    printf("This is output Result");
    scanf("%d,%f",&age, &result);
    printf("Age: %d, Result : %.2f\n",age, result);
    return 0;
}