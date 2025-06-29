//print 64,56,48,....,16
#include<stdio.h>

    int main()
    {
        int a=64;
        while (a>=16)
        {
            if (a%8==0)
            {
                printf("%d\n",a);
            }
            a-=8;//or a--;
        }
        
    return 0;
    }