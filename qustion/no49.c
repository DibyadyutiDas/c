//wap to enter a number and display all its digit
#include<stdio.h>

    int main()
    {
        int a,b,c,d,e;
        printf("enter a number");
        scanf("%d",&a);
        if (a%10==b)
        {
            printf("%d",b);
        }
        if (a%100==c)
        {
            d=c-b;
            printf("%d",d);
        }
        e=a-c;
        printf("the digit are %d",e);
    return 0;
    }