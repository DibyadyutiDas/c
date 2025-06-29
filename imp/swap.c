// ?WAPfor swap of two number using xor operator

#include<stdio.h>
#define SWAP(x,y)(x^=y^=x^=y)
    void main()
    {
        int num1,num2; 
        printf("Enter two numbers\n");
        scanf("%d%d",&num1,&num2);

        printf("Values before swapping\n");
        printf("num1=%d num2=%d\n",num1,num2);

        SWAP(num1,num2);
        printf("Values after swapping\n");
        printf("num1=%d num2=%d\n",num1,num2);
    }