#include <stdio.h>
void main()
{
    int n=0,sum;
    printf("Enter your number for sum = ");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++) sum+=i;
    printf("Your sum is = %d",sum);
}