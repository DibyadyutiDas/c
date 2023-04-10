#include<stdio.h>

    int main()
    {
        int num1,num2,res;
        
        printf("Enter two numbers -");
        scanf("\n%d%d",&num1,&num2);

        res = num1 | num2;
        printf("\n%d logical or %d = %d",num1,num2,res);
        
        res = num1 & num2;
        printf("\n%d logical and %d = %d",num1,num2,res);
        
        res = ~num1;
        printf("\nlogical not of %d = %d",num1,res);
        
        res = num1 << 2;
        printf("\nBitwise lift shift of %d = %d",num1,res);
        
        res = num1 >> 2;
        printf("\nBitwise right shift of %d = %d",num1,res);
        
        res = num1 ^ num2;
        printf("\n%d bitwise xor %d = %d",num1,num2,res);
        
        return 0;
    }