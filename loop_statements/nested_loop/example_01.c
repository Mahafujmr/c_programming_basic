// write a nested loops
/*
1-> for loop(variable initilaztion, condition, increment){
then use for loop (variable initilization,condition, increment){
printf();use
}
}
*/
#include<stdio.h>
int main()
{
    for(int i =1; i<=3; i++){

        for ( int m= 1 ; m<=2 ; m++){
            printf("I= %d ,M= %d\n",i,m);
        }
    }
}