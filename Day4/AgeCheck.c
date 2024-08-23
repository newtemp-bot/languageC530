#include <stdio.h>
void main()
{
    int age = 0;
    printf("\nEnter your age (Intger Only) = ");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("\n----------------------------------------------------");
        printf("\n\tYou are eligable for voting");
        printf("\n\tPlease Move forword for next step....");
        printf("\n----------------------------------------------------\n");
    }
    else if (age == 18)
    {
        printf("\n----------------------------------------------------");
        printf("\n\tYou have sepcial permisions");
        printf("\n----------------------------------------------------\n");
    }
    else if (age == 16)
    {
        printf("\n----------------------------------------------------");
        printf("\n\tYou have 16 sepcial permisions");
        printf("\n----------------------------------------------------\n");
    }
    else
    {
        printf("\n----------------------------------------------------");
        printf("\n\tYou are not eligable for voting");
        printf("\n\tPlease Move backword....");
        printf("\n----------------------------------------------------\n");
    }

    /* If have one statments then you can remove curly braces*/
    if (16 < 2)
        printf("hello");
    else
        printf("HII");
    /* Satic Block */
    {
        printf("hii");
    }
    /* Nested if else and elseif ladder */
    /* if ()
    {
        // code 
        if ()
        {
            // so on....
        }
        else
        {
            // so on.... 
        }
    }
    else if ()
    {
        // code 
        if ()
        {
            // so on.... 
        }
        else if ()
        {
            // so on.... 
        }
        else
        {
            // so on.... 
        }
    }
    else
    {
        // code 
        if ()
        {
            // so on.... 
        }
        else
        {
            // so on.... 
        }
    } */
   /* Condtion is are one or more than two you can write in if brackets*/
   /* if([conditon] && [conditon]...) */
   /* if([conditon] || [conditon]...) */
   /* if(([conditon] && [conditon]) || ([conditon] && [conditon])...) */
   /* if(([conditon] || [conditon]) && ([conditon] || [conditon])...) so on... */
   /* Short hand if else.... */
   printf("%s",(16>5)?"Hello":"Hii");
   printf("%d",(16<5)?25:26);
   int x = (16<5)?16:5;
   printf("%d",x);
}