// ?WAP to find upper case character

#include<stdio.h>

    int main()
    {
        char character;
        printf("Enter a character -");
        scanf("%c",&character);
            if (character<=122 && character>=97)
            {
                printf("It is a lower case character ");
            }
            else
            {
                printf("It is upper case character");
            }
            
        return 0;
    }