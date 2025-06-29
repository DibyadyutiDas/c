//wap to enter a number to check wheather it is a perfect number or not using for loop
#include<stdio.h>

    int main()
    {
        int a,n=0,i;
        printf("Enter a number ");
        scanf("%d",&a);
    for (int i=1;i<a;i++)
    {
        if (a%i==0)
        {
            n=n+i;
        }
    }                                                //it give out put 1 time
        if (n==a)
        {
            printf("this is a perfect no \n");
        }
        else
        {
            printf("This is not a perfect no \n");
        }
    //}                                              //it give wrong out put
    return 0;
    }