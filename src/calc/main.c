#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

#include "calc.h"

#define BUF_SIZE 1024

int calc(int lhs, char op, int rhs)
{
    switch (op)
    {
        case '+':
            return my_add(lhs, rhs);
        case '-':
            return my_sub(lhs, rhs);
        case '*':
            return my_multi(lhs, rhs);
        case '/':
            return my_div(lhs, rhs);
        default:
            return 0;
    }
}

int main()
{
    int lhs = 0;
    char op = '\0';
    int rhs = 0;;
    char* cmd_line;

    while (cmd_line=readline("(calc) "))
    {
        lhs = 0;
        op = '\0';
        rhs = 0;

        sscanf(cmd_line, "%d %c %d", &lhs, &op, &rhs);
        printf("%d\n", calc(lhs, op, rhs));

        free(cmd_line);
    }
    printf("\n");
    return 0;
}
