#include<stdio.h>

    int main()
    {
        int num1 = 10;
        printf("For increment");
        printf("%d",num1);
        printf("\n%d",num1++);//postfix
        printf("\n%d",++num1);//prefix
        
        int num2 = 10;
        printf("\nFor decrement");
        printf("%d",num2);
        printf("\n%d",--num2);//prefix
        printf("\n%d",num2--);//postfix
        
        return 0;
    }