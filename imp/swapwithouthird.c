// ?WAP to swap two number without third variable

#include<stdio.h>

    int main()
    {
        int a,b;

        printf("enter the value of a ");
        scanf("%d",&a);
        printf("enter the value of b ");
        scanf("%d",&b);
        
        a=a+b;
        b=a-b;//if we comment out this it give value of a=a,b=b
        a=a-b;//if we comment out this it give value of a=a+b
        printf("the swap value of a and %d and b is %d",a,b);

        return 0;
    }