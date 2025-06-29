/*How to enter a number and the variable is case sensitive*/
#include<stdio.h>

    int main()
    {
    int a;
    printf("enter the number");
    scanf("%d",&a/*this is case sensitive*/);
    printf("you enter the number %d",a);
    return 0;
    }