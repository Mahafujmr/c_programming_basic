// write a programme nested if else 
#include<stdio.h>
int main()
{
    int result;
    printf("Enter Your Result:");
    scanf("%d",&result);
    if (result >= 33)
    {
        if (result >=80)
        {
            printf("Your Are got A+");
        }
        else
        {
            printf("You are not A+");
        }
      
    }
    else
        {
            printf("You fail");
        }
    
    return 0;
}