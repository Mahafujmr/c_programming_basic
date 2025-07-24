// write a programme and print maximum number
/*
1- array initialization not size
maximum number initilizatiton
2- use for loop and for loop include if condition
3- and for loop outside use printf and  printf maximum number
*/
#include <stdio.h>
int main()
{
    int numbers[] = {10, 20, 30, 40, 60, -55};
    int maxmum = numbers[0];
    for (int index = 1; index < 6; index++)
    {
        if (maxmum < numbers[index])
        {
            maxmum = numbers[index];
        }
    }

    printf("Maximum Number is= %d", maxmum);

    return 0;
}