#include <stdio.h>
#include <string.h>
struct Stu{
    int x;
    char name[90];
    void dis()
    {
        printf("display function called..");
    }
};
int main()
{
    struct Stu s1;
    s1.x = 50;
    strcpy(s1.name,"hello");
    printf("%d",s1.x);
    printf("%s",s1.name);
    s1.dis();
}