#include <stdio.h>
int main()
{
    int i,n;
    printf("enter number=");
    scanf("%d",&n);

    for(i=2;i<=n;i+=2)
    {
        printf("%5d",i);
    }
    return 0;
}