#include <stdio.h>
void main()
{
    int x = 10;
    int *y = &x;
    int **z = &y;
    *y=20;
    char arr[] = "Hello";
    char *s = arr;
    printf("%p\n\n",&x);
    printf("%p\n\n",y);
    printf("%p\n\n",*z);
    printf("%d\n\n",**z);
    printf("%p\n\n",z);
    printf("%c",*s);
}