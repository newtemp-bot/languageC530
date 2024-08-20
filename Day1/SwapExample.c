#include <stdio.h>
int main()
{
    /* Swaping using third variable. */
    int a=10,b=20,temp=0;
    printf("\n\nBefor Swap Value of A = %d and B = %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n\nAfter Swap Value of A = %d and B = %d",a,b);
    
    /* Swaping without third variable. */
    int k=10,j=20;
    printf("\n\nBefor Swap Value of A = %d and B = %d",k,j);
    k = k + j;//10+20=30 = k
    j = k - j;//30-20=10 = j
    k = k - j;//30-10=20 = k
    printf("\n\nAfter Swap Value of A = %d and B = %d",k,j);
    return 0;
}
