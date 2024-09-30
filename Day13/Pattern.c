#include <stdio.h>
void main()
{
    int n = 10;
    /* for (int r = 0; r < n; r++)
    {
        for (int c = 0; c <= r; c++)
        {
            printf("* ");
        }
        printf("\n");
    } */
    /* for (int r = 0; r < n; r++)
    {
        for (int c = n; c >= r+1; c--)
        {
            printf("* ");
        }
        printf("\n");
    } */
    /* for (int r = 0; r < n; r++)
    {
        for (int c = n; c >= r+1; c--)
        {
            printf("  ");
        }
        for (int c = 0; c <= r; c++)
        {
            printf("* ");
        }
        printf("\n");
    } */
    /* for (int r = 0; r < n; r++)
    {
        for (int c = 0; c <= r; c++)
        {
            printf("  ");
        }
        for (int c = n; c >= r+1; c--)
        {
            printf("* ");
        }
        printf("\n");
    } */
    for (int r = 0; r < n; r++)
    {
        for (int c = n; c >= r+1; c--)
        {
            printf("  ");
        }
        for (int c = 0; c <= r; c++)
        {
            printf("* ");
        }
        for (int c = 0; c <= r - 1; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
}