#include <stdio.h>
int main() 
{
    int num;
    int sum = 0;
    printf("Enter numbers (enter a negative number to stop):\n");
    
    while (1) 
    {
        scanf("%d", &num);
        if (num < 0) 
        {
            break;
        }
        sum += num;
    }

    printf("The total sum is: %d\n", sum);
    return 0;
}