//Enter anumber to check  wheather it  is a pllandrom number or not
#include<stdio.h>

    int main()
    {
        int num,rem,div,reverse;
        printf("Enter a number ");
        scanf("%d",&num);
        int temp = num;
        while (num != 0)
        {
            rem = num % 10;
            div = num / 10;
            //printf("%d",rem);
            reverse = reverse * 10 + rem;
            num = div;   
        }
        if (temp == reverse)
        {
            printf("This number is pllandrom number");
        }
        else
        {
            printf("This number is not pllandrom number");
        }
    
    return 0;
    }