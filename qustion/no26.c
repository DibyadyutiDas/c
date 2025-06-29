//enter to non equal no and display the smalest one
#include<stdio.h>

    int main()
    {
        int num1,num2;
        printf("Enter a number ");
        scanf("%d",&num1);
        printf("Enter anathor number ");
        scanf("%d",&num2);
        if (num1 < num2)
        {
            printf("%d is smaller than %d",num1,num2);
        }
        else if (num1 > num2)
        {
            printf("%d is grater than %d",num1,num2);
        }
        else
        {
            printf("you enter equal number");
        }
    
    return 0;
    }