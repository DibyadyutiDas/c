#include<stdio.h>

    int main()
    {
        int num1,num2;
        printf("Enter two numbers -");
        scanf("%d%d",&num1,&num2);
        (num1 > num2) ? printf("%d is greater",num1) : printf("%d is greater",num2);//(condition)?(true):(false);
        return 0;
    }