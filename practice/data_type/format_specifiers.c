/// write a programme a format specifiers 
#include<stdio.h>
int main(){

    // 
    int userID= 100;  // format specifiers = %d
    float userAccount = 3.4566;  //  format specifiers = %f
    double userPassportNumber = 123434566; /// format specifiers = %1f
    char userGrade = 'A'; /// format specifiers = %c
    char userFeadBack []="This is MY Account"; /// format specifiers = %s


    /// out put show screens
    printf("My User Id is %d\n",userID);
    printf("My user Accout name is %.2f\n",userAccount);
    printf("My user passport number is %1f\n",userPassportNumber);
    printf("MY user Grade is %c\n", userGrade);
    printf("My User Accout  FeadBack is %s\n",userFeadBack);



}