#include <stdio.h>
#include <stdlib.h>
#define MAX 800
void main()
{
    FILE *fp;
    char dis[MAX];
    fp = fopen("Test.txt", "r"); // Read Mode
    if (fp == NULL)
    {
        printf("Something Went Wrong.");
    }
    else
    {
        printf("File Opened...");
        while (fgets(dis,200,fp))
        {
            printf("string is: %s\n", dis);
        }
        
       /*  while (fscanf(fp, "%*s  %*s %s", dis) == 1)
            printf("%s\n", dis); */
    }
}