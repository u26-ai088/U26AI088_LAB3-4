#include<stdio.h>
int main()
{
    int i,n,j;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                int c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    printf("maximum num=%d\n",a[n-1]);
    printf("minimum num=%d\n",a[0]);
    return 0;
}