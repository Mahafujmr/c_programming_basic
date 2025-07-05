// write a programme thats calculates in area of a triangel
#include<stdio.h>
int main()
{
    float base, height, area;
    printf("Enter Base Value :");
    scanf("%f",&base);
    printf("Enter Height value :");
    scanf("%f",&height);
    area = (float) 1/2 * base * height; 
    // type casting = float
    printf("The show Traiangel value = %.2f",area);

    return 0;
}