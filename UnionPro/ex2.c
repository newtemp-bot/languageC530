#include <stdio.h>
union Students
{
    int id;
    char name[100];
    float marks; 
}s1;
struct Std
{
    int id;
    char name[100];
    float marks; 
}s2;
void main()
{
    printf("%d",sizeof(s1));
    printf("%d",sizeof(s2));
}