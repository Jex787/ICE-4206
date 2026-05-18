#include <stdio.h>

int main() {
    int n, i, x, sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        sum += x;
    }

    printf("Sum = %d\nAverage = %.2f", sum, (float)sum / n);

    return 0;
}
