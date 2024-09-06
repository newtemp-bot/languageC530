#include <stdio.h>
void main()
{
    int num = 10;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ",num);
            num+=10;
        }
        printf("\n");
    }
    
}