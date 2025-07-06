// write a  programme check mark
#include <stdio.h>
int main()
{
    float marks;
    printf("Enter Your Mark:");
    scanf("%f", &marks);

    // marks 80 = or up
    if (marks >= 80)
        printf("A+");

    else if (marks >= 70)
        printf("A");

    else if (marks >= 60)
        printf("A-");

    else if (marks >= 50)
        printf("B");

    else if (marks >= 40)
        printf("c");

   else if (marks >= 33)
        printf("D");

    else
        printf("Fail");

    return 0;
}