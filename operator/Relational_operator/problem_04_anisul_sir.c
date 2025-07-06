// write  a programme and check large number
#include<stdio.h>
int main()
{
    int num1, num2;
    // input first number
    printf("Enter The First Number:");
    scanf("%d",&num1);

    // inputt sceond number
    printf("Enter The Sceond Number:");
    scanf("%d",&num2);
    // condition check < and >

    if (num1>num2)
    {
        printf("Thtis is Large Number");
    }
    
    else 
    {
        printf("This is small Number");
    }
    

    return 0;
}