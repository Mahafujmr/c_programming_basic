# ✅ C Programme Journey

##  write hello world use c programme .

> C programme syntax

`#include <stdio.h>`
```c
// int = keyword
// main = function
// printf = function
// ; = semicolone
#include <stdio.h>
int main()
{
    printf("Hello World");
}
```

## Write a programme that prints integer number.
```c
#include <stdio.h>
int main()
{
    int number =30;
    printf("This Number is %d",number);
}
```
> Other Example
```c
#include <stdio.h>
int main()
{
    int number =40;
    int number1 = 60;
    printf("This number are %d, %d",number, number1);
}
```

## Write a programme and  prints floating , double number and character .
```c
#include <stdio.h>
int main()
{
    float rollNumber = 20;
    double amnoutNumber = 100.022;
    char ch = 'a';
    printf("This is a Floating Number %f\n", rollNumber);
    printf("This is a amount Number %lf\n", amnoutNumber);
    printf("This is a character Name %c\n", ch);
}
```

## Write a programme that takes and int, and print that number.
```c
#include <stdio.h>
int main()
{
    int number;
    // user the enter number
    printf("Please Enter the Number = ");
    // read the number from the user
    scanf("%d",&number);
    // print the entered number
    printf("Print this number is = %d",number);
}
```

