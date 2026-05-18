#include <stdio.h>

int main() {
    int a, b;
    char op, eq;

    while (scanf("%d%c%d%c", &a, &op, &b, &eq) == 4) {
        if (eq != '=') continue;

        switch(op) {
            case '+': printf("%d\n", a + b); break;
            case '-': printf("%d\n", a - b); break;
            case '*': printf("%d\n", a * b); break;
            case '/': printf(b ? "%d\n" : "Error\n", a / b); break;
            case '%': printf(b ? "%d\n" : "Error\n", a % b); break;
            default: printf("Invalid\n");
        }
    }

    return 0;
}
