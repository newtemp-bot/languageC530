#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char dis;
    fp = fopen("Test.txt", "r"); // Read Mode
    if (fp == NULL)
    {
        printf("Something Went Wrong.");
    }
    else
    {
        printf("File Opened...");
        while (1)
        {
            dis = fgetc(fp);
            if (feof(fp))
                break;

            printf("%c", dis);
        }
    }
}