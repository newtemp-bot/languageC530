#include <stdio.h>
#include <string.h>
void main()
{
    // char str[] = {'H','e','l','l','o'};
    char str[100] = "Hello";
    char str2[20] = "Hello";
    //strcat(str, str2);
    //printf("%s", str);
    size_t length = strlen(str);
    printf("%zu",length);
    printf("\n\n%s",str);
    if (strcmp(str,str2)==0)
    {
        printf("Match");
    }
    else
    {
        printf("Not Match");
    }
    
    /* for (int i = 0; i < length; i++)
    {
        printf("%c", str[i]);
    } */
}