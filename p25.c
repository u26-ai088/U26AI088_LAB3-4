#include <stdio.h>
int main()
{
	int num,i;
	int j=1;
	printf("Enter a number");
	scanf("%d",&num);
	while (j<=10)
	{
		i=num*j;
		printf("\n%d * %d =%d",num,j,i);
		j++;
	}
	
	return 0;
}