#include <stdio.h>
void main()
{
    int a[] = {8, 2, 3, 4, 1};
    /* int[] a;
    int [] a;
    int []a; */
    /* a[0]=10;
    a[1]=20;
    a[2]=30; */
    /* printf("%d",a[0]);
    printf("%d",a[1]);
    printf("%d",a[2]); */
    printf("%lu", sizeof(a));
    int alen = sizeof(a) / sizeof(int);
    for (size_t i = 0; i < alen; i++)
    {
        printf("%d", a[i]);
    }
}