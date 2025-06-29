#include<stdio.h>

    int main()
    {
    int n,a=1,s=0;
    printf("Enter a number ");
    scanf("%d",&n);
    do
    {
        if (n%a==0)
        {
            s=s+a;
        }
        a++;
    } while (a<n);
    if (s==n)
    {
        printf("perfect number");
    }
    else
    {
        printf("not a perfect number");
    }
    
    return 0;
    }