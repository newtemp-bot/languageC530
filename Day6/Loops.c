#include <stdio.h>
void main()
{
    int count = 0;
    /* while (count > 0)
    {
        printf("%d",count);
        count--;
    } */
    do
    {
        printf("%d", count);
        count--;
    } while (count > 0);
}