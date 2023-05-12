#include<stdio.h>

int main()
{
    int num;
    printf("Enter your gread -");
    scanf("%d",&num);
    if (num > 80 && num < 100)
    {
        printf("Your grade is A");
    }
    else if (num > 60 && num < 80)
    {
        printf("Your grade is B");
    }
    else if (num > 40 && num < 60)
    {
        printf("Your grade is C");
    }
    else if (num > 30 && num < 40)
    {
        printf("Your grade is D");
    }
    else
    {
        printf("You are fail");
    }
    
    return 0;
}