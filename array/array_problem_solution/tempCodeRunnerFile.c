// write  a programme print minimum number
/*
1- declare array and initilization
2- variable declration
3- use for loop and then use if condition
and printf function
*/
#include <stdio.h>
int main()
{
    int number[] = {33, 44, 55, 44, 100};
    int minimum = number[0];
    for (int index = 1; index < 4; index++)
    {
        if (minimum > number[index])
        {
            minimum = number[index];
        }
    }
    printf("Minimum Number is = %d", minimum);
    return 0;
}