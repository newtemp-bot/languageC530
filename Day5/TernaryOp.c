#include <stdio.h>

int main()
{
    int age =18;
    
    /*if(age >= 18) printf("Yes You are 18.");
    else printf("Not 18.");*/
    
    printf("%s",(age>=18)?"Yes You are 18.":"Not 18.");
    
    //(conditions)?"true":"false";
    
    int numberGrade = 35;
    
    if(numberGrade<=100 && numberGrade>90) printf("\n\nA+(Distinction)");
    else if(numberGrade<=90 && numberGrade>70) printf("\n\nA(First)");
    else if(numberGrade<=70 && numberGrade>45) printf("\n\nB(Second)");
    else if(numberGrade<=45 && numberGrade>=35) printf("\n\nC(Pass)");
    else if(numberGrade<=34 && numberGrade>=0) printf("\n\nFail");
    else printf("You have entered wrong number.");

    return 0;
}