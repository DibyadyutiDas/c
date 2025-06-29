//wap to enter a number and revers it using for loop
#include<stdio.h>

    int main()
    {
        int a,b,c,revers=0;
        printf("Enter a number ");
        scanf("%d",&a);
        for (int i=a;a!=0;i--)
        {
            b=a%10;
            c=a/10;
            revers=revers*10+b;
            printf("%d",revers);
            a=c;
        }    
    return 0;
    }