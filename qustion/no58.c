//wap to print two digit even no 
#include<stdio.h>

    int main()
    {
    int a=10;
    /*do
    {
        if (a%2==0)
        {
            printf("%d \n",a);
        }
        a++;
    } while (a<=99);*/
    do
    {
        printf("%d \n",a);
        a=a+2;
    } while (a<=99);
    
    return 0;
    }