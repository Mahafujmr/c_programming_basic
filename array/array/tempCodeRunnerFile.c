// write a programme students marks
/*
. array declaration
variable declaration
use for loop and average
*/
#include <stdio.h>
int main()
{
    int mathsSubject[5];
    int totalMarks = 0;
    float averageMarks;
    for (int number = 0; number < 5; number++)
    {
        printf("Students Marks =%d", number);
        scanf("%d", &mathsSubject[number]);
    }
    return 0;
}