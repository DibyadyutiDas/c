//wap to enter a number and display all its digit
#include<stdio.h>

    int main()
    {
        int num,div,rem,reverse;
        printf("Enter a number ");
        scanf("%d",&num);
        
        while (num != 0)
        {
            rem = num % 10;
            div = num / 10;
            printf("%d \n",rem);
            num = div;
        }
    
    return 0;
    }