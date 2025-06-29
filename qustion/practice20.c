#include<stdio.h>
#include<string.h>
    void main()
    {
        char a[10];
        char b[10];
        int i;
        printf("input string");
        gets(a);
        gets(b);
        for ( i = 0; a[i] != '\0'; i++)
        {
            if (a[i]==b[i])
            {
                printf("Equal");
            }
            else
            {
                printf("not Equal");
            } 
        }
    }