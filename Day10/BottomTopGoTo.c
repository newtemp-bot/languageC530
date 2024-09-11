#include <stdio.h>

int main()
{
    int n = 1;
    start:
    printf("%d ",n);
    n++;
    if (n<=10)
    {
        goto start;
    }
    else
    {
        printf("End of the code.");
    }
    
}