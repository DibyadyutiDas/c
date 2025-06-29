//check wheather the number is vowel or consonant
#include<stdio.h>

    int main()
    {
        char ch;
        printf("enter your alphabate\n");
        scanf("%c",&ch);
        switch (ch)
        {
        case 'a':
            printf("This is vowel");
            break;
        case 'e':
            printf("This is vowel");
            break;
        case 'i':
            printf("This is vowel");
            break;
        case 'o':
            printf("This is vowel");
            break;
        case 'u':
            printf("This is vowel");
            break;
        case 'A':
            printf("This is vowel");
            break;
        case 'E':
            printf("This is vowel");
            break;
        case 'I':
            printf("This is vowel");
            break;
        case 'O':
            printf("This is vowel");
            break;
        case 'U':
            printf("This is vowel");
            break;//if we do not print AEIOU in capital then it shows consonant for AEIOU 
        default:
        printf("this is consonant");
            break;
        }
    return 0;
    }