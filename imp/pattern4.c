// !                               ****
// !                                ***
// !                                 **
// !                                  *

#include<stdio.h>

    int main()
    {
        int i,j;
        for (int i = 5;i >= 1;i--)
        {
            for (int j = 1;j <= 5-i;j++)
            {
                printf(" ");
            }
            for (int j = 1;j <= i;j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
        
        return 0;
    }