// ?WAP for ticket price according to age
#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age - ");
    scanf("%d",&age);

    if ((age>10 && age<18)||(age>60 && age<80))
    {
        printf("Ticket value is 100");
    }
    else if (age>=18 && age<=60)
    {
        printf("the ticket value is 120");
    }
    else
    {
        printf("seat is not available for you");
    }
    
    return 0;
}