//wpa to enter a number to show wheather it is perfect or not Ex-6=1+2+3
#include<stdio.h>

    int main()
    {
        int num;
        int i = 1,perfect = 0;
        printf("Enter a number ");
        scanf("%d",&num);
        do
        {
            if (num % i == 0)
            {
                perfect = perfect + i;
            }
            i++;
        } while (i < num);
        if (perfect == num)
        {
            printf("This is a perfect number ");
        }
        else
        {
            printf("This number is not a perfect number");
        }
            
    return 0;
    } 