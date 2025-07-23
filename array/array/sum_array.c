// write a programme sum array
#include<stdio.h>
int main()
{
    int number [5]; 
    int sum=0;
    for(int index=0;index<5; index++){
        printf("Number [%d] =",index);
        scanf("%d",&number[index]);
        
    }
    for(int index=0;index<5; index++){
            sum = sum+number[index];
        }
        printf("This Number is = %d\n ",sum);
    return 0;
}