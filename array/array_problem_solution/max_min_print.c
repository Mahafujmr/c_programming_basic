// write a programme maximum and minimum number print
#include <stdio.h>
int main()
{
    int resultNumber[] = {33, 44, 55, 666, 33, 455, 32};
    int maximumNumber = resultNumber[0];
    int minimumNumber = resultNumber[0];
    for (int index = 1; index < 7; index++)
    {
        if (maximumNumber < resultNumber[index])
        {
            maximumNumber = resultNumber[index];
        }
        if (minimumNumber > resultNumber[index])
        {
            minimumNumber = resultNumber[index];
        }
    }
    // print maximum number
    printf("Maximum Number is = %d\n", maximumNumber);
    // print minimum number
    printf("Minimum Number is = %d", minimumNumber);
    return 0;
}