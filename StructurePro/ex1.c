#include <stdio.h>
#include <string.h>
void display(int id,char name[100],double marks);
struct Students
{
    int id;
    char name[100];
    double marks;
}s1,s2;
// child structure declaration
struct child {
    int x;
    char c;
};

// parent structure declaration
struct parent {
    int a;
    struct child b;
};

struct Point
{
    int x,y;
};
typedef struct ex1
{
    int i;
}e;


void main(){
    //struct Students s3,s4;
    struct Point str = { 1, 2 };
    struct parent var1 = { 25, 195, 'A' };
    //struct ex1 s = {5}; 
    e s = {5}; 
    s1.id = 1;
    strcpy(s1.name,"Ashok");
    s1.marks = 90.25;
    s2.id = 2;
    strcpy(s2.name,"Pooja");
    s2.marks = 90.85;
    display(s1.id,s1.name,s1.marks);
    display(s2.id,s2.name,s2.marks);
    

    // accessing and printing nested members
    printf("var1.a = %d\n", var1.a);
    printf("var1.b.x = %d\n", var1.b.x);
    printf("var1.b.c = %c", var1.b.c);

    struct Point* ptr = &str;

    printf("%d %d",ptr->x,ptr->y);
    
}

void display(int id,char name[100],double marks)
{
    printf("\n\t%d\t %s\t %.2lf",id,name,marks);
}