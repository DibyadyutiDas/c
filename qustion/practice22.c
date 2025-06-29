#include<stdio.h>
void sum(int,int);                    //prototype
    void main()
    {
        int num1,num2;
        printf("Enter two number\n");
        scanf("%d%d",&num1,&num2);
        sum(num1,num2);              //actual parameter
    }
    void sum(int a,int b)            //formal
    {
        int res;
        res=a+b;
        printf("sum=%d",res);
    }