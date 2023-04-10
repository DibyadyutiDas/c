#include<stdio.h>

    int main()
    {
        int a = 2,b;
        b = sizeof(2);
        printf("%d",sizeof(int));
        printf("\n%d",sizeof(double));
        printf("\n%d",sizeof(3.5));
        printf("\n%d",sizeof(a));
        printf("\n%d",sizeof(b));
        return 0;
    }