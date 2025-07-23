// write a programme average 
/*
1- declare array - size 5
2- declare sum variable
3- declare average variable
4- use for loop(initilazation, condition, increment){
use printf and scanf
}
use for loop sum number {}
5- printf sum 
6- and use average 
*/
#include<stdio.h>
int main()
{
    int numbers [5];
    int addtion =0;
    float average ;

    for(int index =0;index<5; index++){
        printf("Index [%d] =",index);
        scanf("%d",&numbers[index]);
    }
    for(int index =0;index<5; index++){
        addtion =addtion+numbers[index];
    }
    printf("Total Additon = %d\n",addtion);
    average = (float)addtion/5;
    printf("Average is =%.2f\n ",average);
    return 0;
}