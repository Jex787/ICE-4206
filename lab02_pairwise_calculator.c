#include <stdio.h>

int main() {
    int a[100], n, i;
    char op;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf(" %c", &op);

    for(i = 0; i < n; i += 2) {
        switch(op) {
            case '+': printf("%d ", a[i] + a[i+1]); break;
            case '-': printf("%d ", a[i] - a[i+1]); break;
            case '*': printf("%d ", a[i] * a[i+1]); break;
            case '/': printf("%d ", a[i] / a[i+1]); break;
            case '%': printf("%d ", a[i] % a[i+1]); break;
        }
    }

    return 0;
}
