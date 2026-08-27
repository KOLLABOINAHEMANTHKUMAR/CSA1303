#include <stdio.h>

int n;
int e[10][10];
int closure[10];

void findClosure(int state)
{
    int i;

    closure[state] = 1;

    for (i = 0; i < n; i++)
    {
        if (e[state][i] == 1 && closure[i] == 0)
        {
            findClosure(i);
        }
    }
}

int main()
{
    int i, j;

    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("Enter epsilon transition matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &e[i][j]);
        }
    }

    printf("\nEpsilon Closure:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            closure[j] = 0;

        findClosure(i);

        printf("E-closure(q%d) = { ", i);

        for (j = 0; j < n; j++)
        {
            if (closure[j] == 1)
                printf("q%d ", j);
        }

        printf("}\n");
    }

    return 0;
}
