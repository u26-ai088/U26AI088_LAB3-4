#include <stdio.h>
int main()
{
    int i,n,prime=1;
    printf("enter number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;
        }
    }
    
    if(prime==0)
    {
        printf("%d is composite number",n);
    }
    else
    {
        printf("%d is prime number",n);
    }
    return 0;
}