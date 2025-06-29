#include<stdio.h>
void sum(int,int);
    void main()
    {
        int num1,num2;
        printf("Enter two number\n");
        scanf("%d%d",&num1,&num2);
        sum(num1,num2);
    }
    sum(a,b)
    {
        int c;
        c=a+b;
        printf("%d",c);
    }