#include<stdio.h>

int main()
{
    int rating;
    printf("Enter your ratting between 1 to 5 -");
    scanf("%d",&rating);

    switch (rating)
    {
        case 1:
            printf("Your rating is 1");
            break;
        case 2:
            printf("Your rating is 2");
            break;
        case 3:
            printf("Your rating is 3");
            break;
        case 4:
            printf("Your rating is 4");
            break;
        case 5:
            printf("Your rating is 5");
            break;
        default :
            printf("invalid rating");
    }
    return 0;
}