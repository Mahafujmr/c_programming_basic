// write a programme switch case statements
#include<stdio.h>
int main()
{
    // variable store the day number
    int day = 3;
    // switch statement check the day value
    switch(day){
        // exit switch check this block then next
        case 1:
        printf("This is Saturday");
        break;
        case 2:
        printf("This is Sunday");
        break;
        case 3:
        printf("This is Monday");
        break; 
        case 4:
        printf("This is Tuesday");
        // last one no case matches then show default case 
        default :
        printf("This is Default Day");
    }
    return 0;// successfully termination this programme
}