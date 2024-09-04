#include <stdio.h>
void main()
{
    char su[] = "ashok";
    char sp[] = "12345";
    char u[100], p[100];
    int flag = 0;
    printf("Enter your username = ");
    scanf("%s", &u);
    printf("Enter your password = ");
    scanf("%s", &p);
    printf("Your Entered username and password is = %s %s\n\n", u, p);
    for (int i = 0; i < sizeof(su) / sizeof(su[0]); i++)
    {
        if (su[i] == u[i]) flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    for (int i = 0; i < sizeof(sp) / sizeof(sp[0]); i++)
    {
        if (sp[i] == p[i]) flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    printf("%s",(flag)?"Yes Logged":"No Wrong Username and Password");
}