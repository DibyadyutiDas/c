    #include<stdio.h>

    int main()
    {
        int skip,i = 1;
        printf("Enter a number -");
        scanf("%d",&skip);
        while (i<10)
        {
            i++;
            if (i == skip)
            {
                continue;
            }
            else
            {
                printf("\n%d",i);
            }  
        }
    return 0;
    }