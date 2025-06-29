//Wap to enter a number and display its digits 
#include<stdio.h>

    int main()
    {
        int a,b,c;
        printf("Enter a number ");
        scanf("%d",&a);
        printf("The digits are ");
        for (int i=1;i<a;i++)
        //for (int i=a;i!=0;i--)
        {
            b=a%10;
            c=a/10;
            printf("%d \n",b);
            a=c;
        }
    
    return 0;
    }