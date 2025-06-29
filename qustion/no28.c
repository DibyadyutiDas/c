#include<stdio.h>

    int main()
    {
        int a;
        printf("enter a number ");
        scanf("%d",&a);
        if (a%5 == 0 && a%3 == 0)
          {
            printf("%d is devided by 3 and 5",a);
        }
        else
        {
            printf("%d is not devided by 3 and 5",a);
    }
    return 0;
    }