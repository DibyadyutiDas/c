#include<stdio.h>

    void main()
    {
        int num;
        printf("Enter a number -");
        scanf("%d",&num);
        if (num % 2 == 0)
        {
            goto even;
        }
        else
        {
            goto odd;
        }
        even:
        printf("%d is even",num);
        odd:
        printf("%d is odd",num);
    }