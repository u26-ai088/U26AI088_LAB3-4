#include<stdio.h>
int main()
{
    int u;
    float c;
    printf("enter consumption in unites: ");
    scanf("%d",&u);

    if(u>0 && u<=200)
    {
        c=u*0.50;
    }
    else if(u<=400)
    {
        c=100+(u-200)*0.65;
    }
    else if(u<=600)
    {
        c=230+(u-400)*0.80;
    }
    else 
    {
        c=425+(u-600)*1.25;
    }
    printf("the amount to be paid by the consumer = %f",c);
    return 0;
}