// ?

#include<stdio.h>
#include<string.h>
#include<conio.h>

    void main()
    {
        char num[100];
        int i,j;
        printf("Enter the string -");
        gets(num);
        int length=strlen(num);
        int palindrome=1;
        for (i = 0,j = length-1;i<j; ++i,--j)
        {
            if (num[i]!=num[j])
            {
                palindrome=0;
            }
        }
        if (palindrome)
        {
            printf("This given string is a palindrome number");
        }
        else
        {
            printf("This given string is not a palindrome number");
        }
        
    }