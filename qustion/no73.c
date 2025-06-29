//Wap to enter a number and display its factor
#include<stdio.h>

    int main()
    {
        int a;
        printf("Enter a number ");
        scanf("%d",&a);
        printf("The factorial are ");
        for (int i=1;i<=a;i++)
        {
            if (a%i==0)
            {
            printf("%d\n",i);
            }
        }
        
    return 0;
    }