#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char dis;
    fp = fopen("Test.txt", "a"); // write Mode
    if (fp == NULL)
    {
        printf("Something Went Wrong.");
    }
    else
    {
        printf("File Opened...");
        fprintf(fp,"\nHello World");
    }
}