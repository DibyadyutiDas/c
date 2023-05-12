#include<stdio.h>

    int main()
    {
        int num;
        printf("Enter a number -");
        scanf("%d",&num);
        for (int i = 1; i < num; i++)//initialige,condition,increament
        {
            printf("\nThe value of i is %d",i);
        }
        return 0;
    }