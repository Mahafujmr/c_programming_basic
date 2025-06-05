/// write a programme thats print format specifier
#include<stdio.h>
int main()
{
 // variable declarations with different data type

  char studentName [] ="Tuhin"; // string(character arrays)
  int roll = 10;
  float result =3.59;
  double totalNumber = 222.33;
  char grade = 'A';

  printf("I am a %s,My Roll Number is %d, My SSC Result is %.2f, Total Number is %.2f,And My Grade is %c ",studentName,roll, result, totalNumber, grade);

  return 0;
}