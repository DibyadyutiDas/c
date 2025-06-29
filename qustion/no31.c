//display the bus fair according to this condition
/*age        busfair
  <18          15
  >18          20
  <50          40
  >50          30*/
#include<stdio.h>

int main()
{
    int age;
    char ch;
 
    printf("Enter your status 's' or 't' ");
    scanf("%c",&ch);
    printf("enter your age ");
    scanf("%d",&age);

    if (ch == 's')
    {
           if (age>=18 )
        {
            printf("bus fair is 20");
        }
        else if (age<=18)
        {
            printf("bus fair is 15");
        }
    } 
    if (ch == 't')  
    {
            if (age<=50)
        {
            printf("bus fair is 40");
        }
        else
        {
            printf("bus fair is 30");
        }
    }
    return 0;
}