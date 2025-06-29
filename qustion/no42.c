//print 5,10,15,20,25,.....,100
#include<stdio.h>

    int main()
    {
        int a=0;
        while (a<=100)
        {
            if (a%5==0)
            {
                printf("%d\n",a);
            }
            a++;
        }
    
    return 0;
    }