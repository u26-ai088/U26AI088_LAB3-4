#include <stdio.h>
int main()
{
	int n;
	float x,y;
	printf("Enter value of x =");
	scanf("%f",&x);
	printf("Enter value of n =");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			{
				y=1+x;
				printf("Y(x,n)= %f",y);
				break;
			}
			
		case 2:
			{
				y=1+x/n;
				printf("Y(x,n)= %f",y);
				break;
			}
		case 3:
			{
				y=1+x*n;
				printf("Y(x,n)= %f",y);
				break;
			}
		default:
			{
				y=1+x*n;
				printf("Y(x,n)= %f",y);
			}
	}
	
	return 0;
}