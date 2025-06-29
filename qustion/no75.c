//Print 1,4,9,16,....,81
#include<stdio.h>

    int main()
    {
        int a=9,b;
        for (int i=1;i<=a;i++)
        {
            b=i*i;
            printf("%d\n",b);
        }
        
    return 0;
    }