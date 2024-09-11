#include <stdio.h>
void hello3Times();//Function Declaration
void main()
{
    hello3Times();//Function Calls
    printf("Ashok");
    printf("Prajapati");
    printf("Bascom");
    hello3Times();//Function Calls
}
void hello3Times()
{//Function Definition
    for (int i = 0; i < 3; i++)
    {
        printf("Hello");
        printf("World");
    }
}
