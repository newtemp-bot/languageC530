#include <stdio.h>
int main()
{
    int age = 16;
    if (age>=18)
        goto la1;
    else
        goto la2;

    la1:
        printf("Yes Valid");
        return 0;
    la2:
        printf("Not Valid");
        return 0;
}