#include<stdio.h>

    void main()
    {
        int num;
        printf("Enter a number -");
        scanf("%d",&num);
        for (int i = 1; i < num; i++)
        {
            if (num == 5)
            {
                break;
            }
            printf("%d",i);
        }
    }