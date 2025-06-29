#include<stdio.h>

    void main()
    {
        int i;
        printf("Enter a number");
        scanf("%d",&i);
        if (i%2==0)
        {
            goto even;
        }
        else
        {
            goto odd;
        }
        even:
        printf("This is a even number");
        goto end;
        odd:
        printf("This is a odd number");
        goto end;
        end:
        printf("\nThe number is %d",i);
    }