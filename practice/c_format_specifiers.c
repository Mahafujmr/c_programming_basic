// write a programme format specifiers 
#include <stdio.h>
int main()
{
    // int number
    int roll = 10;
    // float number
    float cgpa = 3.15;
    // double number
    double total_number = 100.203445;
    // string number
    char my_result []= "This is my reslut";
    // char 
    // char just 1 variable use // but this code use two varibale A or + this is not right
    // char grade = 'A+'; // not right this code 
    /// char variable just include 1 value 
    char grade = 'A';
    // sort int number 
    unsigned int bangla = 60;
    // long int number
    unsigned long int math = 109987;
    // int octal number
    int octal_code = 04556;

    // print all format specifiers
    printf("My Roll number is %d\n",roll);
    printf("MY cgpa number is %f\n",cgpa);
    printf("My Total number is %1f\n",total_number);
    printf("Result= %s\n",my_result);
    printf("MY CGPA Grade is %c\n",grade);
    printf("Bangla Number is  %u\n",bangla);
    printf("Math Number is %lu\n",math);
    printf("Octal Subject Code is %o\n",octal_code);
    /// hex lowercase and uppercase code
    printf("Hex (lowercase Number ):%x\n",roll);
    printf("Hex (UpperCase Number is): %X\n",roll);

}