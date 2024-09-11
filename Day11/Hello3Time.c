#include <stdio.h>
void hello3Times();//Function Declaration//Function with no arguments and no return value
void sum(int,int);//Function with no arguments and with return value
void main()
{
    hello3Times();//Function Calls
    printf("Ashok");
    printf("Prajapati");
    printf("Bascom");
    hello3Times();//Function Calls
    /* int a = 10, b =20;
    int c = a + b; *///Dot do
    int x = 10, y =20;
    sum(x,y);
    sum(50,90);
}
void hello3Times()
{//Function Definition
    for (int i = 0; i < 3; i++)
    {
        printf("Hello");
        printf("World");
    }
}
void sum(int a,int b)//a=x,b=y
{
    printf("Sum =  %d ",a+b);
}
