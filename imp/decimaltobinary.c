// ?WAP to find binary form of a decimal number
#include<stdio.h>

    int main()
    {
        int num,rem;
        int a[10];
        int j = 0;
        printf("Enter a decimal number -");
        scanf("%d",&num);
        while (num)
        {
            rem = num % 2;
            num = num / 2;
            a[j] = rem;
            j++;
        }
        for (int i = j-1;i  >= 0;i--)
        {
            printf("%d",a[i]);
        }
    
    return 0;
    }