# ✅ C Programme Journey
## 💻 What is C programing language?

### 🧠 Definition

A C Program is a set of instructions written in the C programming language to perform a specific task.It follows the structure and syntax defined by the C language, which is a general-purpose, high-performance programming language.

C was developed by Dennis Ritchie in 1972 at Bell Labs.

---
### Bangla Edition -
(C প্রোগ্রাম হলো C প্রোগ্রামিং ভাষায় লেখা নির্দেশনার একটি সেট, যা একটি নির্দিষ্ট কাজ সম্পাদনের জন্য ব্যবহার করা হয়। এটি C ভাষার গঠন (structure) ও সিনট্যাক্স (syntax) অনুসরণ করে, যা একটি সাধারণ উদ্দেশ্য (general-purpose), উচ্চ-দক্ষতার (high-performance) প্রোগ্রামিং ভাষা।

C ভাষা ১৯৭২ সালে ডেনিস রিচি (Dennis Ritchie) দ্বারা Bell Labs-এ ডেভেলপ করে।)

---
### 💻 C programme Data Type -
🧠 What is a Data Type?

A data type in programming (especially in C) defines the type of data a variable can store. It tells the compiler what kind of value (such as integer, float, character, etc.) will be stored in that variable.

---
### Bangla Edition -
🧠 Data Type কী?

Data Type হলো কোনো ভ্যারিয়েবল কী ধরনের মান (value) সংরক্ষণ করবে — সেটা নির্ধারণ করে।
যেমন: পূর্ণসংখ্যা, দশমিক সংখ্যা, অক্ষর, বড় মান ইত্যাদি।

### 🧠 Main Categories of Data Types in C:
1. Primary (Built-in) Data Types
2. Derived Data Types
3. User-Defined Data Types
4. Void Type
### ✅ 1. Primary (Built-in) Data Types

			
		
			
			

| Date Type | Description | Size (Typical)|Example |
|---|---|---|---|
| int | Integer numbers | 4 bytes|int age = 25; |
| float	 | Decimal numbers (single precision) |  4 bytes|float pi = 3.14; |
| double |Decimal numbers (double precision) | 8 bytes|double d = 2.718;|
| char | Single character | 1 byte|char grade = 'A'; |















##  Write a programme that prints Hello World .

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

