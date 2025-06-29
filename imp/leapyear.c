// ?WAP for leap year

#include<stdio.h>

    int main()
    {
        int year;
        printf("Enter the year -");
        scanf("%d",&year);
        if (year%4)
        {
            printf("This is not leap year");
        }
        else
        {
            printf("This is leap year");
        }    
        
    return 0;
    }