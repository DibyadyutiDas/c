//wap to enter a number to display all it digit
#include<stdio.h>

    int main()
    {
        int a,b,c;
        printf("Enter a number ");
        scanf("%d",&a);
        do
        {
        b=a%10;
        c=a/10;
        printf("%d\n",b);
        a=c;
        } while (a!=0);
    return 0;
    }