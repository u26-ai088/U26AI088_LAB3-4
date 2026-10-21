#include <stdio.h>
int main()
{
    int num,i,j,sum=0;
    printf("enter number");
    scanf("%d",&num);
    i=num;
    /*
    while(i>0)
    {
        j=i%10;
        sum+=j;
        i=i/10;
    }
    int a=sum;
    if(a>9)
    {
        i=a;
        a=0;
        while(i>0)
        {
            j=i%10;
            a+=j;
            i=i/10;
        }
    }
    */
    int a=num;    
    while(1)
    {
        i=a;
        a=0;
        while(i>0)
        {
            j=i%10;
            a+=j;
            i=i/10;
        }
    }
    printf("%d\n",a);
}