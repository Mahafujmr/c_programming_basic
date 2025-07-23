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
        printf("Students Marks [%d] =", number + 1);
        scanf("%d", &mathsSubject[number]);
    }
    // total marks add
    for (int number = 0; number < 5; number++)
    {
        totalMarks = totalMarks + mathsSubject[number];
    }
    printf("Total Marks = %d\n", totalMarks);
    // average marks
    averageMarks = (float)totalMarks / 5; // use type casting
    printf("Total Average Marks is = %.2f", averageMarks);
    return 0;
}