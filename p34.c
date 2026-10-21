#include <stdio.h>
int main()
{
    int a=0,b=1,c,num=10;
    while(num!=0)
    {
        c=a+b;
        b=a;
        printf("%5d",b);
        a=c;
        num--;
    }
    return 0;
}