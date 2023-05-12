#include<stdio.h>

    int main()
    {
        int num,i = 1;
        printf("Enter a number -");
        scanf("%d",&num);
        while (i <= num)
        {
            printf("%d\n",i);
            i++;
        }
        return 0;
    }