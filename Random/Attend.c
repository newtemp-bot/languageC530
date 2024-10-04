#include <stdio.h>
void main()
{
    int held, attend;
    double percent;
    char med = 'N';

    printf("Please enter your total held class (int) = ");
    scanf("%d", &held);
    printf("Please enter your total attend class (int) = ");
    scanf("%d", &attend);

    percent = (double)attend * 100 / held;

    if (percent < 75)
    {
        printf("\n\nSorry You have lower attendance\n\n");
        if (percent >= 60 && percent <= 74)
        {
            printf("Enter if you have any medical emg... (Y/N) = ");
            scanf(" %c", &med);
            if (med == 'y' || med == 'Y')
            {

                printf("You can seat in exam");
            }
            else if (med == 'n' || med == 'N')
            {
                printf("You can not seat in exam");
            }
            else
            {
                printf("Wrong char try again");
            }
        }
        else{
            printf("You can not seat in exam");;
        }
    }
    else
    {
        printf("You can seat in exam");
    }
}