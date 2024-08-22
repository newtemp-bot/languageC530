#include <stdio.h>
void main()
{
    printf("%d",10>5 && 2>1);//1
    printf("%d",10>5 && 2<1);//0
    printf("%d",10>5 || 2>1);//1
    printf("%d",10>5 || 2<1);//1
    printf("%d",!15<2);
    printf("%d",!((10>5 && 2<1) || (10>5 || 2<1)));
}
