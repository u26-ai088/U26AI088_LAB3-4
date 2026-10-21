#include <stdio.h>
int main()
{
    int num,i;
    int isprime=1; 

    printf("Enter number = ");
    scanf("%d", &num);
    
    if (num<=1) 
	{
        isprime=0; 
    }

    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            isprime= 0;
            break;       
        }
    }
    
    if (isprime==1) 
	{
        printf("Prime number=%d\n",num);
    } 
	else 
	{
        printf("Not a prime number=%d\n",num);
    }

    return 0;
}