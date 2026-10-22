#include<stdio.h>
int main()
{
    int num,i,j,f=1;  
	float sum=0;
    printf("enter num = ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            f*=j;
        }
        sum=(float)(sum+(i/f));
    }

    printf("sum =n%f",sum);
    return 0;
}