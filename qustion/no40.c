//wap to print allto digit even no
#include<stdio.h>

    int main()
    {
        int a=10;
        while (a<=99)
        {
            if (a%2==0)
            {
                printf("the two digit even number are %d\n",a);
            }
            a++;   
        }
    
    return 0;
    }