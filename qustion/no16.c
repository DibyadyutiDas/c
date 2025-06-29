/*prime number A prime number is a whole number greater than 1 whose only factors are 1 and itself.
 A factor is a whole number that can be divided evenly into another number.
The first few prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23 and 29.
Numbers that have more than two factors are called composite numbers.*/
//this is not the best method to solve the problem
#include<stdio.h>

    int main()
    {
        int i,n,prime=1;//if we write prime then it give (this is not a prime number)
        printf("Enter a number -");
        scanf("%d",&n);
        for (i=2;i<n;i++)
        {
            if (n%i==0)
            {
                prime=0;
                break;
            }
        }
            if (prime==0)
            {
                printf("This is not a prime number");
            }
            else
            {
                printf("This is a prime number");
            }   
    return 0;
    }