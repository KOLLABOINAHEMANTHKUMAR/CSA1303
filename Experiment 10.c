#include <stdio.h>

int main()
{
    int n = 4;
    int e[4][4] = {0};

    // Epsilon transitions
    e[0][1] = 1;
    e[1][2] = 1;
    e[2][3] = 1;

    printf("Epsilon Closure:\n");

    for (int i = 0; i < n; i++)
    {
        printf("E-closure(q%d) = {q%d", i, i);

        int j = i;

        while (j < n - 1 && e[j][j + 1] == 1)
        {
            printf(", q%d", j + 1);
            j++;
        }

        printf("}\n");
    }

    return 0;
}
