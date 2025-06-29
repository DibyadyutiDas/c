#include<stdio.h>

    int main()
    {
    int n,a,ld,s;
    printf("Enter a number ");
    scanf("%d",&n);
    a=n;
    for (s=0;a!=0;a/=10)
    {
        ld=a%10;
        s=s+(ld*ld*ld);
    }
    if (s==n)
    {
        printf("It is a amstrong number ");
    }
    else
    {
        printf("It is not a amstrong number ");
    }
    return 0;
    }