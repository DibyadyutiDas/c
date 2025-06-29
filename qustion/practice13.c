#include<stdio.h>

    void main()
    {
        int n,i;
        printf("Enter the array size ");
        scanf("%d",&n);
        int roll[n];
        for ( i = 0; i < n; i++)
        {
            printf("Enter your roll ");
            scanf("%d",&roll[i]);
            printf("\n");
        }
        for ( i = 0; i < n; i++)
        {
            printf("roll no=%d\n",roll[i]);
        }
        
        printf("\n%d",sizeof(roll));
    }