// ?check weather the character is vowel or consonant

#include<stdio.h>

    int main()
    {
        char character;
        printf("Enter a alphabet -");
        scanf("%c",&character);
        if(character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z')
        {
        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'
         || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
        {
            printf("This is vowel");
        }
        else
        {
            printf("this is consonant");
        }
        }   
        else
        {
            printf("this is not a alphabate");
        }

    return 0;
    }