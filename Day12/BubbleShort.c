#include <stdio.h>
void main()
{
    int a[] = {80, 20, 30, 40, 10};
    int alen = sizeof(a) / sizeof(int);
    int temp = 0;
    for (int i = 0; i < alen; i++)
    {
        for (int j = i; j < alen-1; j++)
        {
            if (a[j+1]<a[i])
            {
                temp = a[i];
                a[i] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for (size_t i = 0; i < alen; i++)
    {
        printf("%d, ", a[i]);
    }
    
}