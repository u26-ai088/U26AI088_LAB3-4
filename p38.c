#include <stdio.h>
int main()
{
    int i,n;
    printf("enter number=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%5d",i*i);
    }
    return 0;
}