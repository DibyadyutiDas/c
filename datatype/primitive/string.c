#include<stdio.h>

    void main()
    {
        char a[10],b[6],c[6];
        printf("Enter character data -");
        scanf("%s",a);
        printf("You enter the data %s",a);
        b[6]="Dibyadyuti";
        printf("\nData is %s",b);
        c[6]='d','y','u','t','i','\0';
        printf("\nData is %s",c);
    }
//if data is 10 byte then memory is (10*byte)+1byte=11byte