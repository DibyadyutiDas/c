// ?WAP for swap using pointer

#include<stdio.h>
void swap(int *x,int *y);
    void main()
    {
        int a,b;
        printf("Enter the numbers\n");
        scanf("%d%d",&a,&b);
        printf("Before swap a=%d,b=%d\n",a,b);
        swap(&a,&b);
        printf("After swap a=%d,b=%d",a,b);
    }

void swap(int *x,int *y)
    {
        int z;
        z=*x;
        *x=*y;
        *y=z;
    }