//Wap to enter a number to check wheather it is a amstrong number or not
#include<stdio.h>

    int main()
    {
        int a,b,n,d;
        printf("enter a number ");;
        scanf("%d",&n);
        a=n;
    for (d=0;a!=0;a/=10)
    {
        b=a%10;
        d=d+(b*b*b);
    }
    if (d==n)
    {
        printf("It is an amstrong number ");
    }
    else
    {
        printf("It is not an amstrong number ");
    }
    
    return 0;
    }