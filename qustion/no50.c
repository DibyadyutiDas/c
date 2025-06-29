//wap to enter a number and display all its digit
#include<stdio.h>

    int main()
    {
        int num,mod,reverse;
        printf("Enter a number ");
        scanf("%d",&num);
        while (num!=0)
        {
            mod=num%10;
            num=num/10;
            printf("%d \n",mod);
            //reverse=reverse*10+mod;
            //num=a;
        }
        /*while (num!=0)
        {
            mod=num%10;
            div=num/10;
            printf("%d \n",mod);
            num=div;
        }*/
        
    return 0;
    }