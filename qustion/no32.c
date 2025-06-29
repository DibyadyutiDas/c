//make an arithmatic calculator
#include<stdio.h>

    int main()
    {
        char ch;
        float a,b,c;
        printf("\nenter a operator ");
        scanf("%c",&ch);
        printf("\nEnter a number -");
        scanf("%f",&a);
        //printf("\nEnter a operator ");
        //scanf("%c",&ch);
        printf("\nEnter anathor number -");
        scanf("%f",&b);
        
        switch (ch)
        {
            case '+':
                c=a+b;
                printf("\nsum =%lf",c);
                break;
            case '-':
                c=a-b;
                printf("\nsubstraction =%lf",c);
                break;
            case '*':
                c=a*b;
                printf("\nmultiplication =%lf",c);
                break;
            case '/':
                c=a/b;
                printf("\ndivision =%lf",c);
                break;
            
            default:
                printf("\nyou enter wrong info");
                break;
        }
    return 0;
    }