// !                                  *
// !                                 ***
// !                                *****
// !                               *******

// todo good method
#include<stdio.h>

    void main()
    {
        int i,j,n,p=1;
        printf("Enter a number ");
        scanf("%d",&n);
        for ( i = 1; i <= n; i++)
        {
            for ( j = 1; j <= n-i; j++)
            {
                printf(" ");
            }
            for ( j = 1; j <= p; j++) // *odd number of stars in every line like 1,3,5,7...
            {
                printf("*");
            }
            p = p+2;
            printf("\n");
        }   
    }


// #include<stdio.h>

//     void main()
//     {
//         int i,j,n;
//         printf("Enter a number ");
//         scanf("%d",&n);
//         for ( i = 1; i <= n; i++)
//         {
//             for ( j = 1; j <= n-i; j++)
//             {
//                 printf(" ");
//             }
//             for ( j = 1; j <= (i*2)-1; j++) // *odd number of stars in every line like 1,3,5,7...
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }   
//     }


// #include<stdio.h>

//     void main()
//     {
//         int i,j,n,k,p;
//         printf("Enter a number ");
//         scanf("%d",&n);
//         p = n;
//         for ( i = n; i >= 1; i--)
//         {
//             for ( k = 1; k <= i-1; k++)
//             {
//                 printf(" ");
//             }
//             for ( j = i; j <= i + (2 *(p-i)); j++)
//             {
//                 printf("*",j);
//             }
//             printf("\n");
//         }   
//     }