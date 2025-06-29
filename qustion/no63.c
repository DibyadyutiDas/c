//wap to enter a number to display its factors
#include<stdio.h>

    int main()
    {
        int a,x=1;
        printf("Enter a number ");
        scanf("%d",&a);
        do
        {
            if (a%x==0)
            {
                printf("%d \n",x);
            }
            x++;
        } while (x<=a);
        
    return 0;
    }