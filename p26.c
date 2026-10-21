#include <stdio.h>
int main()
{
	int n,i,sum1=0,sum2=0;
	printf("Enter value of n = ");
	scanf("%d",&n);
	
	for(i=n;i>0;i=i-2)
	{
		sum1=sum1+i;
	}
	if(n%2==0)
		printf("Sum of all even numbers = %d\n",sum1);
	else
		printf("Sum of all odd numbers = %d\n",sum1);
	
	for(i=n-1;i>0;i=i-2)
	{
		sum2=sum2+i;
	}
	if(n%2==0)
		printf("Sum of all odd numbers = %d\n",sum2);
	else
		printf("Sum of all even numbers = %d\n",sum2);
	return 0;
}