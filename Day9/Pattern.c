#include <stdio.h>
void main()
{
    int num = 0;
    printf("Enter Your Number = ");
    scanf("%d",&num);
    for (size_t i = 0; i < num; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}