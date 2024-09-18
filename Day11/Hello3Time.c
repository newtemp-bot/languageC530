#include <stdio.h>
#include <math.h>
void hello3Times();//Function Declaration//Function with no arguments and no return value
void sum(int,int);//Function with arguments and with no return value
int dada();//Function with no arguments and with return value
int returnSum(int,int);//Function with arguments and with return value
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
    int value = dada();
    printf("%d",value);
    printf("%d",returnSum(10,20));
    double n = 10.32;
    //for (int i = 1; i < 3; i++) n*=n;
    printf("%lf",pow(n,3));
    
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
int dada()
{
    printf("Hello dada");
    printf("Bye dada");
   return 10; 
}
int returnSum(int a,int b)
{
    return a+b;
}
