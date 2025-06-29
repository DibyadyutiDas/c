//wap to print multiplication table
#include<stdio.h>

    int main()
    {
    int a,b=1,c;
    printf("Ennter a number ");
    scanf("%d",&a);
    do
    {
            c=a*b;
            printf("%d*%d=%d \n",a,b,c);
            b++;
    } while (b<=10);
    
    return 0;
    }