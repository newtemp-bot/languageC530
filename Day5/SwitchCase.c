#include <stdio.h>
void main()
{
    /*
    if(Conditions)==
    {

    }
    else if(Conditions)==
    {

    }
    ...
    else
    {

    }
     */
    int number = 1;
    switch (number)
    {
    case 1:
        printf("Yes match with 1");
        break;
    case 2:
        printf("Yes match with 2");
        break;
    case 3:
        printf("Yes match with 3");
        break;
    case 4:
        printf("Yes match with 4");
        break;
    default:
        printf("Sorry Wrong Number");
        break;
    }

    switch (3)
    {
    case 1:
        printf("Mon");
        break;
    case 2:
        printf("Tue");
        break;
    case 3:
        printf("Wen");
        break;
    case 4:
        printf("Thu");
        break;
    case 5:
        printf("Fri");
        break;
    case 6:
        printf("Sat");
        break;
    case 7:
        printf("Sun");
        break;
    default:
        printf("Not a week number. Please enter right number.");
        break;
    }
    char grade = 'P';
    printf("\n\n\n Please Enter Grade (Pass(P),Fail(F),A-C) = ");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'A':
        printf("Yes you got number 1");
        break;
    case 'B':
        printf("Yes you got number 2");
        break;
    case 'C':
        printf("Yes you got number 3");
        break;
    case 'P':
        printf("You Just Passed...");
        break;
    case 'F':
        printf("No You did't get number.");
        break;
    default:
        printf("Wrong grade");
        break;
    }
}