#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int left, right, i, flag = 1;

    printf("Enter the string: ");
    scanf("%s", str);

    left = 0;
    right = strlen(str) - 1;
    while (left <= right && str[left] == '0' && str[right] == '0')
    {
        left++;
        right--;
    }
    for (i = left; i <= right; i++)
    {
        if (str[i] != '1')
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
