//enter the number and display its factors
#include<stdio.h>

    int main()
    {
        int num,x = 1;
        printf("Enter a number -");
        scanf("%d",&num);
        printf("factorial of %d is \n",num);
        
        while (x <= num)
        {
            if (num%x == 0)
            {
                printf("%d \n",x);
            }
            x++;
        }
    
    return 0;
    }