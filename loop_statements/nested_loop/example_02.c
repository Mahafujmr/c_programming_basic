// write a  programme nested loops 
/*
1-> for (variable initilization , condition, increment){
for (variable initilization , condition, inrement){
printf();
}
}
*/
#include<stdio.h>
int main()
{
    for(int m= 1; m<=4; m++){
        for(int n =1; n<=2;n++){
            printf("M=%d,N=%d\n",m,n);
        }
    }
    return 0;
}