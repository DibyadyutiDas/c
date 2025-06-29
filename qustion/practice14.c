#include<stdio.h>

    void main()
    {
        int r,c,i,j;
        printf("Enter the matrix row and coloumn size");
        scanf("%d%d",&r,&c);
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
            for ( j = 0; j < c; j++)
            {
                res[i][j]=num1[i][j]+num2[i][j];
                printf("%d",res[i][j]);
            }
            printf("\n");
        }
    }