#include <stdio.h>
#include <string.h>

int main()
{
    char pass[100];
    int len, hasUpper = 0, hasDigit = 0, hasSpecial = 0;

    printf("Enter password: ");
    scanf("%s", pass);

    len = strlen(pass);

    for (int i = 0; i < len; i++)
    {
        if (pass[i] >= 'A' && pass[i] <= 'Z')
        {
            hasUpper = 1;
        }
        if (pass[i] >= '0' && pass[i] <= '9')
        {
            hasDigit = 1;
        }
        if (pass[i] == '!' || pass[i] == '@' || pass[i] == '#' ||
            pass[i] == '$' || pass[i] == '%')
        {
            hasSpecial = 1;
        }
    }

    if (len >= 8 && hasUpper && hasDigit && hasSpecial)
    {
        printf("Password is strong\n");
    }
    else
    {
        printf("Password is weak\n");
        if (len < 8)
            printf("Need at least 8 characters\n");
        if (!hasUpper)
            printf("Need at least one uppercase letter\n");
        if (!hasDigit)
            printf("Need at least one digit\n");
        if (!hasSpecial)
            printf("Need at least one special character\n");
    }

    return 0;
}