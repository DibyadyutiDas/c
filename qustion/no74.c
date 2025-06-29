//Wap to enter a number and display its factorial using for loop
#include<stdio.h>

    int main()
    {
    int a,b=1;
    printf("Enter a number ");
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        b=b*i;   
    }
    printf("The factorial of %d is ",b);
    
    return 0;
    }