#include <stdio.h>

int main() {
    int n, i, j, k;
    char sym = '-';            // change this to any symbol you prefer
    printf("Enter the Number to form this Pattern :- \n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Enter a positive integer.\n");
        return 1;
    }

    /* Desired output for n = 5:
       ----1
       ---12
       --123
       -1234
       12345
    */

    for (i = 1; i <= n; i++) {
        // print leading symbols
        for (j = 1; j <= n - i; j++) {
            putchar(sym);
        }

        // print numbers 1..i
        for (k = 1; k <= i; k++) {
            printf("%d", k);
        }

        putchar('\n');
    }

    return 0;
}