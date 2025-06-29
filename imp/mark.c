// ?WAP for mark report card

#include<stdio.h>

    int main()
    {
        int physics,chemistry,math;
        float total;

        printf("Enter your physics mark");
        scanf("%d",&physics);

        printf("Enter your chemistry mark");
        scanf("%d",&chemistry);

        printf("Enter your math mark");
        scanf("%d",&math);

        total=(physics+chemistry+math)/3;
        
        if (physics<=33 ||chemistry<=33||math<=33||total<=40)
        {
            printf("Your total percentage is %f and you are fail",total);
        }
        else
        {
            printf("Your total percentage is %f and you are pass",total);
        }

    return 0;
    }