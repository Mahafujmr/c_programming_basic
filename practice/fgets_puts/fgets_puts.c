// write a programme prints that fgets and puts
#include<stdio.h>
int main()
{
    char yourName [40];
    printf("Enter Your Name :");
    fgets(yourName,sizeof(yourName),stdin);
    printf("My Name is :");
    puts(yourName);
    return 0;
}