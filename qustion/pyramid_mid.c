#include<stdio.h>

    void main()
    {
        int i,j,n,k,p;
        printf("enter a number ");
        scanf("%d",&n);
        p=n;
        for ( i=n; i>=1; i--)
        {
            for ( k=1; k<=i-1; k++)
            {
                printf("\t");
            }
            for ( j=i; j<=i+2*(p-i); j++)
            {
                printf("*\t",j);
            }
            printf("\n");
        }   
    }