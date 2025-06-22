// write a programme all data type example
#include<stdio.h>
int main()
{
  int roll;
   float result;
  char grade;
  printf("Enter Your Roll :");
  scanf ("%d",&roll);
  printf("Enter Your Result :");
  scanf("%f",&result);
  printf("Enter Your Grade :");
  getchar(); // use getchar 
  scanf("%c",&grade);

  printf("\nShow Result\n ");
  printf("My Roll Number is : %d \n",roll);
  printf("My Result is %f \n",result);
 printf("My Grade is  : %c \n",grade);




    return 0;
}