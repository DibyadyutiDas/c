#include<stdio.h>

    int main()
    {
    int i = 5;
    printf("The value after i++ is %d\n",i++);//This gives the same value print for increment
    printf("The value of i is %d\n",i);       //This gives the before int value
    printf("The value after i++ is %d\n",++i);//This gives the increased 1 value
    printf("The value of i is %d\n",i);       //This gives the before int value
    printf("The value after i++ is %d\n",--i);//This gives the decrease 1 value
    printf("The value of i is %d\n",i);       //This gives the before int value
    printf("The value of the i is increase by 10, %d",i+=10);//This increase the value of i = i + 10
    /*scanf data type
    for int data type is &d and
    for float data type is &f and
    for double data type is &lf*/

    return 0;
    }