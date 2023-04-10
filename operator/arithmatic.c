#include<stdio.h>

    int main()
    {
        int num1,num2;
        float res;
        
        printf("Enter two numbers -");
        scanf("%d%d",&num1,&num2);

        res = num1 + num2;
        printf("Addition of %d and %d is %f",num1,num2,res);
        
        res = num1 - num2;
        printf("\nSubstraction of %d and %d is %f",num1,num2,res);
        
        res = num1 * num2;
        printf("\nMultiplication of %d and %d is %f",num1,num2,res);
        
        res = num1 / num2;
        printf("\nDivision of %d and %d is %f",num1,num2,res);
        
        res = num1 % num2;
        printf("\nModulous of %d and %d is %f",num1,num2,res);
        return 0;
    }