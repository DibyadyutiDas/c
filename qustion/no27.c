#include<stdio.h>

    int main()
    {
        int a;
        printf("Enter a number ");
        scanf("%d",&a);
        if (a%7 == 0)
        {
            printf("%d is devided by 7",a);
        }
        else
        {
            printf("%d is not devided by 7",a);
        }
    
    return 0;
    }