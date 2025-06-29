// ?Wap to enter a number to check whether it is armstrong number or not
// *(153)There are 3 digits 1^3+5^3+3^3 = 153

#include<stdio.h>
#include<math.h>

    int main()
    {
        int num,rem,div,temp,armstrong;
        int powers = 0;
        printf("Enter a number ");
        scanf("%d",&num);
        temp = num;
        do
        {
            rem = num % 10;
            armstrong = rem * rem * rem;
            div = num / 10;
            powers = powers + armstrong;
            num = div;
        } while (num != 0);
        if (powers == temp)
        {
            printf("\nIt is an armstrong no");
        }
        else
        {
            printf("\nIt is not an armstrong no");
        }
        
        return 0;
    }