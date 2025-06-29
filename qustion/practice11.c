#include<stdio.h>

    void main()
    {
        int i;
        for ( i = 0; i < 10; i++)
        {
            if (i==6||i==8)
            {
                continue;
            }
            printf("%d",i);
        }
    }