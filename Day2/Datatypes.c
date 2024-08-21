#include<stdio.h>
#define PI 3.14;
const int MAX_VALUE = 100;//globle variable
void main()
{
    /* String */
    char c[] = "Ashok Hello";
    printf("%s",c);
    /* Double */
    double x = 3.14;//local variable
    float y = 4.5;
    printf("\n\n\n%lf",x);
    /* SizeOf oprator */
    printf("\n\n\n%lu",sizeof(11.5));
    printf("\n\n\n%lu",sizeof(y));
    /* Type Conversion */
    float k = (float) 5 / 2;
    printf("\n\n\n%f",k);
    /* Constants */
    const float pi = 3.14;
    //pi = 4.5;This line gives error
    float n = (float) 10 + PI;
    printf("\n\n\n%f",n);
    /* Custome type size variable */
    size_t l = 250;
    printf("\n\n\n%d",l);
    unsigned int jadu = 321354U;
    long int lala = 654864351357453423U;
    long long int llalala = 65768465465465321312U;
    printf("\n\n\n%d",jadu);
    printf("\n\n\n%d",lala);
    printf("\n\n\n%d",llalala);
}