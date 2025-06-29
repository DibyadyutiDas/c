#include<stdio.h>

    int main()
    {
        int num,div,rem;
        int rev = 0;
        printf("Enter a number ");
        scanf("%d",&num);
        do
        {
            div = num % 10;
            rem = num / 10;
            rev = rev*10 + div;
            num = rem;
        } while (num != 0);
        printf("%d\n",rev);

    return 0;
    }