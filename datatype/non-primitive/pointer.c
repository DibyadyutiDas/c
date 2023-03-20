#include<stdio.h>

    void main()
    {
        int a,*p,**o;
        a=10;
        p=&a;
        printf("%d\n",p);
        o=&p;
        printf("%d\n",&p);
        printf("%d",&o);
    }