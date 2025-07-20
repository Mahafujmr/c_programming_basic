// write programme scanf input value
/* 
1st-> array initialization
use for loop
printf(scanf use and input value)

*/
#include<stdio.h>
int main()
{
    int number [5];
    for (int index =0;index<5; index++){
        printf("Enter The value=");
        scanf("%d",&number[index]);
    }
    return 0;
}