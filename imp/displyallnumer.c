// ?wap to enter a number and display all its digit

#include<stdio.h>

    int main()
    {
        int num,div,rem;
        int reverse = 0;
        printf("Enter a number ");
        scanf("%d",&num);
        
        while (num != 0)
        {
            rem = num % 10;
            div = num / 10;
            reverse=reverse*10+rem;
            num = div;
        }
        while (reverse != 0)
        {
            rem = reverse % 10;
            div = reverse / 10;
            printf("%d \n",rem);
            reverse = div;
        }
        
    return 0;
    }