// write a programme array start index number 1
/*
1-> array declaration
2-> use for loop(varibale initilization,condition, increment)
{3-> printf(index incremet +1),scanf use and array name declare}
last use return 0;
*/
#include<stdio.h>
int main()
{
    int number[9]; // array declaration 
    for(int index=0; index<5;index++){ 
        // use for loop 
        // use printf and include index+1
        printf("Index Number Is %d :",index+1);
        // and use scanf for input array value
        scanf("%d",&number[index]);
    }
    return 0;
}