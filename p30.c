#include <stdio.h>
int main()
{
	int i,num,a,sum;
	printf("Enter number ");
	scanf("%d",&num);
	i=num;
	sum=0;
	while(i>0)
	{
		a=i%10;
		sum=(sum*10)+a;
		i=i/10;
	}
	printf("%d",sum);
	return 0;
}