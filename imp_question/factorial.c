// ?WAP to find factorial of a number

#include<stdio.h>

    float main()
    {
        int i,n;
        int factorial=1; // !if here factorial = 0 then it output 0
        
        printf("Enter a number -");
        scanf("%d",&n);
        for ( i=1; i<=n; i++)
        {
            factorial *=i;
        }
        printf("The value of the factorial %d is %d",n,factorial);

    return 0;
    }