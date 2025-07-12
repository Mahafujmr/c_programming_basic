// write a programme nested if else
#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your age:");
    scanf("%d", &age);
    if (age >= 15)
    {
        if (age >= 22)
        
            printf("You are Student");
        
        else
        
            printf("You are Not Student");
    }

        else
        {
            if (age >= 33)
            {
                if (age >= 30)
                
                    printf("I am fine");
                
                else
                
                    printf("I am not fine");
                
            }
            else
            {
                printf("I read class 6");
            }
        }
         return 0;
    }

   
