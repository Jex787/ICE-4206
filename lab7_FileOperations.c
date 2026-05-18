#include <stdio.h>

int main() {
    FILE *inFile = fopen("input.txt", "r");
    FILE *outFile = fopen("output.txt", "w");

    int x, y, caseNo = 1;

    while (fscanf(inFile, "%d %d", &x, &y) == 2) {
        fprintf(outFile, "Case-%d: %d %d %d %d\n",
                caseNo++,
                x + y,
                x - y,
                x * y,
                x / y);
    }

    fclose(inFile);
    fclose(outFile);

    return 0;
}
