// ?WAP to make an arithmetic calculator
#include<stdio.h>

    int main()
    {
        char operator;
        float num1,num2,res;

        printf("\nenter a operator ");
        scanf("%c",&operator);
        printf("\nEnter a number -");
        scanf("%f",&num1);
        //printf("\nEnter a operator ");
        //scanf("%c",&operator);
        printf("\nEnter another number -");
        scanf("%f",&num2);
        
        switch (operator)
        {
            case '+':
                res = num1 + num2;
                printf("\nAddition = %lf",res);
                break;
            case '-':
                res = num1 - num2;
                printf("\nSubtraction = %lf",res);
                break;
            case '*':
                res = num1 * num2;
                printf("\nMultiplication = %lf",res);
                break;
            case '/':
                res = num1 / num2;
                printf("\nDivision = %lf",res);
                break;
            
            default:
                printf("\nyou enter wrong info");
                break;
        }
    return 0;
    }