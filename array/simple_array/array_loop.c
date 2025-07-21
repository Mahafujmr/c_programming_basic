// write a programme array for loop
/*
- variable declaration
-  use for loop(variable initialization,condition,increment)
- instraction use printf
- use scanf - input terminal
*/
#include<stdio.h>
int main()
{
    int num [5];
    for(int index=0; index<5;index++){
        printf("Number  %d : ",index);
        scanf("%d",&num[index]);
    }
    return 0;
}