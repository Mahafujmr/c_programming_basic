// write a programme break and continue
// --> syntax
/*
variable declaration
1st -> for loop(variable initiliazation,condition, increment){
if(condition)
continue ;
printf();
if(condition)
break;
}
*/
#include<stdio.h>
int main()
{
    int i;
    for(i =1; i<20; i++){
        if(i % 3 == 0)
        continue;
        printf("%d\n",i);
        
        if(i==10)
        break;
    }
    
    return 0;
}