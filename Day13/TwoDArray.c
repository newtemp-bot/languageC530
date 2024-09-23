#include <stdio.h>
void main()
{
    int a[][3] = {{10,20,30},{40,50,60},{70,80,90}};
    int a2[][3] = {{10,20,30},{40,50,60},{70,80,90}};
    //int a[][2][2] = {{{10,20},{30,40}},{{10,20},{30,40}}};
    //printf("%d",a[1][1]);
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("Enter value for a[%d][%d] = ",r,c);
            scanf("%d",&a[r][c]);
        }
    }
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ",a[r][c]);
        }
        printf("\n");
    }
    /* Sum Of Matrix */
    int tempSum = 0;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            tempSum = a[r][c] + a2[r][c];
            printf("%d ",tempSum);
        }
        printf("\n");
    }
}