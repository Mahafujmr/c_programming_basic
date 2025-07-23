// write a programme maths result and average
/*
1- array declaration
2- variable declaration
use for loop
*/
#include <stdio.h>
int main()
{
    int result[5];
    int addtition = 0;
    float average;
    for (int index = 0; index < 5; index++)
    {
        printf("Show [%d] = ", index);
        scanf("%d", &result[index]);
    }
    for (int index = 0; index < 5; index++)
    {
        addtition = addtition + result[index];
    }
    printf("Total Number = %d\n", addtition);
    average = (float)addtition / 5;
    printf("This Marks is =%.2f\n", average);
    return 0;
}