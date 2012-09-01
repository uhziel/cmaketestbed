#include <stdio.h>

#include "calc.h"

#define BUF_SIZE 1024

char cmd_line[BUF_SIZE];

int calc(int lhs, char op, int rhs)
{
    switch (op)
    {
        case '+':
            return add(lhs, rhs);
        case '-':
            return sub(lhs, rhs);
        case '*':
            return multi(lhs, rhs);
        case '/':
            return div(lhs, rhs);
        default:
            return 0;
    }
}

int main()
{
    int lhs = 0;
    char op = '\0';
    int rhs = 0;;

    printf("(calc) ");
    while (fgets(cmd_line, sizeof(cmd_line), stdin))
    {
        lhs = 0;
        op = '\0';
        rhs = 0;

        sscanf(cmd_line, "%d %c %d\n", &lhs, &op, &rhs);
        printf("%d\n", calc(lhs, op, rhs));

        printf("(calc) ");
    }
    printf("\n");
    return 0;
}
