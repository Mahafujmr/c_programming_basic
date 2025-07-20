// write a programme for loop array
/*
1-> array initilization
use for loop
printf ();
*/
#include<stdio.h>
int main()
{
    // array initialization
    // int number [3];->array declaration
    int number []={20,30,40,50,60};
    for(int index=0;index<5;index++){
        printf("%d\n",number[index]);
    }
    return 0;
}