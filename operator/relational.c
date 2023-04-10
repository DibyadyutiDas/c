#include<stdio.h>

    int main()
    {
        int num1,num2,res;
        
        printf("Enter two numbers -");
        scanf("%d%d",&num1,&num2);
        
        printf("\nIf 0 then false if 1 then true");
        
        res = num1 > num2;
        printf("\n%d = %d is greater than to %d",res,num1,num2);
        
        res = num1 >= num2;
        printf("\n%d = %d is greater than and equal to %d",res,num1,num2);
        
        res = num1 < num2;
        printf("\n%d = %d is less than to %d",res,num1,num2);
        
        res = (num1 <= num2);
        printf("\n%d = %d is less than and to %d",res,num1,num2);
        
        res = num1 == num2;
        printf("\n%d = %d is equal to %d",res,num1,num2);
        
        res = num1 != num2;
        printf("\n%d = %d is not equal to %d",res,num1,num2);
        
        return 0;
    }