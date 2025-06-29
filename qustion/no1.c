/*what is the different between = and == */
#include<stdio.h>

int main()
{
    int a = 10;
    if (a = 11)//a == 11
    {
        printf("i am 11");
    }
    else
    {
        printf("i am not 11");
    }
    return 0;
}