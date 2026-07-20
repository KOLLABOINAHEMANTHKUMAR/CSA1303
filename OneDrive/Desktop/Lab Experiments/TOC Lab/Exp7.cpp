#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, found = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i <= len - 3; i++)
    {
        if (str[i] == '1' && str[i + 1] == '0' && str[i + 2] == '1')
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
