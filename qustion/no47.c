//wap to enter a number to show its factorial
#include<stdio.h>

    int main()
    {
        int a=1,n=1,c;
        printf("Enter a number ");
        scanf("%d",&c);
        while (a<=c)
        {
            n=a*n;    
            printf("factorial of %d is %d \n",a,n);
            a++;
        }

    return 0;
    }