// write a programme a scanf number and show output
#include<stdio.h>
int main(){
    int roll ;
    float result;
    char grade ;
    printf("My Roll  result and Result Grade :");
    scanf("%d %f %c",&roll, &result, &grade);
    printf("Show My Roll = %d , Result = %.2f  , Grade = %c ", roll, result, grade);
    return 0;
}