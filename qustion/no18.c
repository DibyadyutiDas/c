#include<stdio.h>
int sum(int a,int b)
{
 a+b;
 return a+b;
}
 int main()
    {
        int num1,num2,c;
        printf("Enter the numbers\n");
        scanf("%d%d",&num1,&num2);
        c=sum(num1,num2);//function call
        printf("sum=%d",c);
        return 0;
    }