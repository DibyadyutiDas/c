// ?WAP to find ascii value of a character
// *ascii value of a = 97

#include<stdio.h>

    int main()
    {
        char ch1,ch2;
        int a1,a2;
        
        printf("Enter 1st character -");
        scanf("%c",&ch1);
        printf("Enter 2nd character -");
        scanf("%c",&ch2);
        
        a1 = (int)ch1;
        a2 = (int)ch2;

        printf("\nascii form of ch1 is %d",a1);
        printf("\nascii form of ch2 is %d",a2);
    return 0;
    }