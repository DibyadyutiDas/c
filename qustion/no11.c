#include<stdio.h>

    int main()
    {
        int i=0;
        do
        {
            printf("The value of is%d\n",i);
            //i++; if here we write i++ then it will gives the last value 3 and then stop it
            if (i == 4)
            {
                break;
            }
            i++;//If here we should not write i++ it give infinite value
            }
            while (i < 10);
        return 0;
    }