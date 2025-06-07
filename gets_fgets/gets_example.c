// write a programme thats print a gets , fgets, getchar
#include<stdio.h>
int main(){
    char myName [50];
    printf("Enter Your name :");
    // gets unsafe function 
    gets(myName);
    printf("My name is ");
    puts(myName);

}