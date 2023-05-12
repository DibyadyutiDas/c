#include<stdio.h>

    int main()
    {
        int i = 1;
        int natural;
        printf("Enter a number -");
        scanf("%d",&natural);
        do
        {
            printf("\n%d",i);
            i++;
        } while (i <= natural);//condition
        return 0;
    }