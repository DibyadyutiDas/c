//Not correct program
#include<stdio.h>
    void main()
    {
        int num,rem,i,a,b,num1;
        a=0;
        b=0;
        i=1;
        printf("Enter a number");
        scanf("%d",&num);
        num1=num;//122=122
        while (num!=0)
        {
            num=num/10;//12//2//0
            a=a+1;//3
        }
        while (b!=a)
        {
            b=b+1;//1//2
            i=i*10;//10//100
        }
        while (num1!=0)
        {
            rem=num1%i;//2//
            num1=num1/10;//12//
            i=i/10;//10
            printf("%d\n",rem);
        }
    }