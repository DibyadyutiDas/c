//enter a number to check wheather it is greater than 50 or less than 50
#include<stdio.h>

    int main()
    {
        int num;
        printf("Enter a number ");
        scanf("%d",&num);
        if (num < 50)
        {
            printf("%d is less than 50",num);
        }
        else
        {
            printf("%d is greater than 50",num);
        }
    
    return 0;
    }