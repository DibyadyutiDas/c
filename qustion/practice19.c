#include<stdio.h>
#include<string.h>
    void main()
    {
        char a[10];
        char b[10];
        printf("Enter the string value\n");
        gets(a);
        gets(b);
        if (strcmp(a,b)==0)
        {
            printf("Equal");
        }
        else
        {
            printf("Not equal");
        }
        
    }