#include <stdio.h>
void fun(int a)
{
    printf("Hello your value is = %d", a);
}
void add(int a, int b)
{
    printf("Addition is %d\n", a + b);
}
void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a - b);
}
void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a * b);
}
void main()
{
    void (*fun_ptr)(int) = fun;
    void (*jadu[])(int, int) = {add, subtract, multiply};
    (*fun_ptr)(20);
    unsigned int ch, a = 15, b = 10;

    printf("Enter Choice: 0 for add, 1 for subtract and 2 "
           "for multiply\n");
    scanf("%d", &ch);

    while (ch != 3)
    {
        (*jadu[ch])(a, b);
        printf("Enter Choice: 0 for add, 1 for subtract and 2 "
               "for multiply\n");
        scanf("%d", &ch);
    }
    fun(10);
}