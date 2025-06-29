#include<stdio.h>

    void main()
    {
        int r,c,i,j,k,sum;
        printf("Enter the matrix row size ");
        scanf("%d",&r);
        printf("Enter the matrix coloumn size ");
        scanf("%d",&c);
        int num1[r][c];
        int num2[r][c];
        int res[r][c];
        printf("Enter the first matrix\n");
        for ( i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                scanf("%d",&num1[i][j]);
            }
            //printf("\n");
        }
        printf("Enter the second matrix\n");
        for ( i = 0; i < r; i++)
        {
            for ( j = 0; j < c; j++)
            {
                scanf("%d",&num2[i][j]);
            }
            //printf("\n");
        }
        printf("The result matrix\n");
        for ( i = 0; i < r; i++)
        {
            for ( k = 0; k < c; k++)
                {
                for ( j = 0; j < c; j++)
                {
                    sum=0;
                    res[i][j]=num1[i][j]*num2[j][k];
                    sum=sum+res[i][j];
                }
                printf("%d ",sum);
            }printf("\n");
        }
    }