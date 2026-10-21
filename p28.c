#include <stdio.h>
int main()
{

    int num,q,sum=0,tamp=0;
    printf("Enter num");
    scanf("%d",&num);

    int i,n=1;
	for(i=num;i>9;i=i/10)
	{
		n=n+1;
	}
	printf("n=%d\n",n);

    tamp=num;
    
    switch(n)
    {
         case 3:
        {
            while(num!=0)
            {
                q=num%10;
                sum=sum+q*q*q;
                num=num/10;
            }
        }
        case 4:
        {
            while(num!=0)
            {
                q=num%10;
                sum=sum+q*q*q*q;
                num=num/10;
            }
        }
        case 5:
        {
            while(num!=0)
            {
                q=num%10;
                sum=sum+q*q*q*q*q;
                num=num/10;
            }
        }
    }
    
    /*
    while(num!=0)
        {
            q=num%10;
            sum=sum+pow(q,n);
            num=num/10;
        }
    */
    printf("sum=%d",sum);
    if(tamp==sum)
    {
        printf("num is armstrong = %d",tamp);
    }
    else
    {
        printf("num is not armstrong = %d",tamp);
    }
    return 0;
}