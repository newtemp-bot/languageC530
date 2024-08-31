#include <stdio.h>
void main()
{
    int a = 65, b = -100, c = 55;
    /* if (a > b)
        printf("A is grater then B");
    else
        printf("B is grater then A"); */

    /* printf("%s", (a > b) ? "A is grater then B" : "B is grater then A"); */

   /*  if (a > b && a > c)
    {
        printf("A is Lagest");
    }
    else
    {
        if (b>c)
        {
           printf("B is Lagest");
        }
        else
        {
            printf("C is Lagest");
        }
    } */

    printf("%s",(a > b && a > c)?"A is Lagest":(b>c)?"B is Lagest":"C is Lagest");
}