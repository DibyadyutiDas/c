#include<stdio.h>

    int main()
    {
        int num1,num2,res;
        
        printf("Enter two numbers -");
        scanf("%d%d",&num1,&num2);
        
        res = num1 && num2;
        printf("\nLogical and value of %d and %d is %d",num1,num2,res);
        
        res = num1 || num2;
        printf("\nLogical or value of %d and %d is %d",num1,num2,res);
        
        res = ! num1;
        printf("\nLogical not value of %d is %d",num1,res);
        
        res = ! 0;
        printf("\nLogical not value of 0 is %d",res);
        
        return 0;
    }