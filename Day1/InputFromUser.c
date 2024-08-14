#include<stdio.h>
int main()
{
    //varibale decleration
    int k;
    //variable defination
    int a=15;
    char c='B';
    float f=12954545.4;
    //printing address of a
    printf("\n\n %p",&a);
    //printing value of a
    printf("\n\n%d\n",a);
    printf("\n\n%c\n",c);
    printf("\n\n%.2f\n",f);
    printf("My %c value is = %d",c,a);

   /* printf("Enter your age = ");
   scanf("%d",&a); 
   printf("You have entered age is = %d ",a); */
    return 0;
}
