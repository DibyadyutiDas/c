#include<stdio.h>

    int main()
    {
    int i,sum,n;
    printf("Enter a number");
    scanf("%d",&n);
    for (i = 1; i < n+1 ; i++)//If here we write i<n then it can not sum the enter value
    {
        sum += i;
    }
    printf("The value of the sum of(1 to your given number) is%d",sum);
    return 0;
    }