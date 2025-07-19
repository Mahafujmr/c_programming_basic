// write a programme simple array
/*
Array -> vary important index number
index number start - 0
example array int number [5]- 5 -> array size
index number -> 0,1,2,3,4 -> total -> 5
*/
#include <stdio.h>
int main()
{
    // array Declaration
    int numbers[5];
    // array initialization
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    // print all array
    // value access always use index number
    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);
    printf("%d\n", numbers[3]);
    printf("%d\n", numbers[4]);
}