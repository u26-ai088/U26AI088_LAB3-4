#include <stdio.h>
int main()
{
    int s,c;
    printf("enter sales");
    scanf("%d",&s);

    if(s<=500)
    {
        c=s*5/100;
    }
    else if(s<=2000)
    {
        c=35+((s-500)*10/100);
    }
    else if(s<=5000)
    {
        c=185+((s-2000)*12/100);
    }
    else
    {
        c=s*12/100;
    }
    printf("commission = %d",c);
    return 0;
}