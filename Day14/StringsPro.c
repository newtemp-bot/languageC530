#include <stdio.h>
#include <string.h>
void main()
{
    // char str[] = {'H','e','l','l','o'};
    char str[100] = "Hello,jadui";
    char str2[20] = "How";
     char source[] = "Hello-How,Are-You?test"; 
     const char delimiters[] = ",-"; 
    char dest[20]; 
  
    // Copying the source string to dest 
    strcpy(dest, source); 
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

    strcpy(dest,source);

    printf("%s",dest);
    
    /* for (int i = 0; i < length; i++)
    {
        printf("%c", str[i]);
    } */
   char* res = strchr(source,'A');
   char* re = strstr(source,str2);
   if (re!=NULL)
   {
    printf("Found at %d",(re-source));
   }
   else
   {
    printf("Not found");
   }
   char* token = strtok(source,delimiters);
   while (token != NULL) { 
        printf("Token: %s\n", token); 
        token = strtok(NULL, delimiters); 
    } 
   
}