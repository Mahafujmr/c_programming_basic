// write a programme bitwise operator
#include<stdio.h>
int main()
{
    int a = 30;
    int b = 20;
    int c;

    // use bitwise operator
    c = a&b;
    printf("a & b = %d\n",c);

    c = a | b;
    printf("a | b = %d\n",c);

    c = a^b;
    printf("a ^ b = %d\n",c);


    return 0 ;

}