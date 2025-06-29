// ?WAP for logical operator

#include<stdio.h>

    int main()
    {
        int a,b,res;
        a = 12;
        b = 8;

        res = a && b;
        printf("Logical AND value =%d",res);

        res = a || b;
        printf("\nLogical OR value =%d",res);

        res = ! b;
        printf("\nLogical NOT value =%d",res);
        
        return 0;
    }