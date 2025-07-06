// write a programme logical operator
// && = Logical ANd
// || = Logical Or
//  = ! == LOgical not

#include<stdio.h>
int main()
{

    char word;
    printf("Enter The word:");
    scanf("%c",&word);
    // use logical operator
    if(word == 'a'|| word == 'e' || word == 'i'|| word == 'o'|| word == 'u')
    printf("This word is Vowel");
    
   // not match conditon and then print this     
    else
    printf("This word is consonant");
    return 0;
}