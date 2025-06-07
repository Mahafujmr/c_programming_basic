// write a programme thats print name
// use fgets and puts function
#include<stdio.h>
int main()
{
    char homeAddress [55];
    printf("Enter Your Home Address:");
    fgets(homeAddress ,sizeof(homeAddress),stdin);
    printf("My Home Address Is :");
    puts(homeAddress);
    return 0;
}