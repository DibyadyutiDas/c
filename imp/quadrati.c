// ?WAP to solve quadratic equation

#include<stdio.h>
#include<math.h>
int main()
{
    int r1,r2,a,b,c,d;
    printf("Enter the value of a - ");
    scanf("\n%d",&a);
    printf("\nEnter the value of b - ");
    scanf("\n%d",&b);
    printf("\nEnter the value of c - ");
    scanf("\n%d",&c);
    d=b*b-4*a*c;
    if (d>=0)
    {
        r1=-b+sqrt(d)/2*a;
        r2=-b-sqrt(d)/2*a;
        printf("The value of the quadratic equation is%d,or%d",r1,r2);
    }
    else
    {
        printf("The quadratic equation is imaginary");
    }
    return 0;
}