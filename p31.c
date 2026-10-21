#include <stdio.h>
int main()
{
    int n,sum=0,i,j;
    printf("enter num");
    scanf("%d",&n);
    for(j=n;j>0;j=j/10)
    {
        i=j%10;
        sum=sum+i;
    }
    printf("sum of digits of number =%d",sum);
    return 0;
}