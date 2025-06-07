// write a programme thats print name
// use fgets and puts function
#include<stdio.h>
int main()
{
    // declaer charrater array and store homeAdress (max 55 charater)
    char homeAddress [55];
    // ask user to enter home address
    printf("Enter Your Home Address:");
    // read the input use fgets
    fgets(homeAddress ,sizeof(homeAddress),stdin);
    // display show enter homeAddress
    printf("My Home Address Is :");
    puts(homeAddress);
    return 0;
}