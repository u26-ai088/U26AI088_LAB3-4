#include <stdio.h>
int main()
{

    int num,q,sum=0,tamp=0;
    printf("Enter num");
    scanf("%d",&num);
    tamp=num;
    while(num!=0)
    {
        q=num%10;
        sum=sum*10+q;
        num=num/10;
    }
    if(tamp==sum)
    {
        printf("num is palindrom = %d",tamp);
    }
    else
    {
        printf("num is not palindrom = %d",tamp);
    }
    return 0;
}