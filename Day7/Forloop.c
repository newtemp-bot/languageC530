#include<stdio.h>
void main(){
    int c = 0;
    /* while (c<5)
    {
        printf("\nHello");
        c++;
    } */
    /* for (int i = 0;i<5;i++) printf("Hello"); */
    /* for (;1;)
    {
        printf("Hii");
    } */
    for (int i=1;i<10;i+=2)
    {
        if (i%2!=0)printf("%d",i);
        i++;
    }
}