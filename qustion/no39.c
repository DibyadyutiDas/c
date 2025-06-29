//print all single digit odd no
#include<stdio.h>

    int main()
    {
        int a=0;
        while (a<=9)
        {
            if (a%2!=0)
            {
                printf("the odd number are %d\n",a);
            }
            a++;
        }

    return 0;
    }