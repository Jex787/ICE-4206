#include <stdio.h>

int main() {
    int n, i;
    long long fact_for = 1, fact_while = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Factorial using for loop
    for (i = 1; i <= n; i++) {
        fact_for = fact_for * i;
    }

    // Factorial using while loop
    i = 1;
    while (i <= n) {
        fact_while = fact_while * i;
        i++;
    }

    // Output results
    printf("\nFactorial using for loop = %lld", fact_for);
    printf("\nFactorial using while loop = %lld", fact_while);

    // Check if both results match
    if (fact_for == fact_while)
        printf("\n\nBoth results are SAME.");
    else
        printf("\n\nResults are DIFFERENT.");

    return 0;
}
