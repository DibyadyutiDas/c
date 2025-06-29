//print 1,4,9,16,.....,81 using do while loop

#include<stdio.h>

    int main()
    {
    int a=1,b;
    do
    {
        b=a*a;
        printf("%d \n",b);
        a++;
    } while (a<=9);
    
    return 0;
    }