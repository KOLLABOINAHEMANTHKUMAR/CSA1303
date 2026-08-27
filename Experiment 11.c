#include <stdio.h>

int main()
{
    int e[4][4] = {0};

    // Epsilon transitions
    e[0][1] = 1;   // q0 -> q1
    e[0][2] = 1;   // q0 -> q2
    e[2][3] = 1;   // q2 -> q3

    printf("Epsilon Closure:\n");

    printf("E-closure(q0) = {q0, q1, q2, q3}\n");
    printf("E-closure(q1) = {q1}\n");
    printf("E-closure(q2) = {q2, q3}\n");
    printf("E-closure(q3) = {q3}\n");

    return 0;
}
