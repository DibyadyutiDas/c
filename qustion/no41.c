#include<stdio.h>

    int main()
    {
        int a=1,b,c;
        printf("Enter a number ");
        scanf("%d",&b);
        while (a<=10)
        {
            c=a*b;
            printf("\n%d*%d=%d",b,a,c);
        a++;
        }
    
    return 0;
    }