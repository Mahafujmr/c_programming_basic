// write a programme array for loop
/*
1-> create -array
for(variable initiliazation,conditon, decrement)
{printf();}
*/
#include<stdio.h>
int main()
{
    int numbers [] ={10,40,30,300,400};
    for(int index = 0; index<5;index++){
        printf("%d\n",numbers[index]);
    }
    return 0;
}