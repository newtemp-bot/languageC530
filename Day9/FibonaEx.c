#include <stdio.h>
void main()
{
    int f1=0,f2=1,sum,n;
    printf("Enter your number = ");
    scanf("%d",&n);
    printf("%d, %d, ",f1,f2);
    for (int i = 0; i < n; i++)
    {
        sum=f1+f2;
        printf("%d, ",sum);
        f1 = f2;
        f2 = sum;
    }
}