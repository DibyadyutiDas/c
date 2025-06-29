// !                               A
// !                               AB
// !                               ABC
// !                               ABCD
// !                               ABCDE

#include<stdio.h>

    int main()
    {
        char i,j;
        for (char i=65;i<=69;i++)
        {
            for (char j=65;j<=i;j++)
            {
                printf("%c",j);
            }
            printf("\n");
        }
        
    return 0;
    }