#include <stdio.h>

int main() {
    int a[10], i, n, max;

    printf("Enter the Number of Elements of Arrays : ");
    scanf("%d", &n);

    if (n <= 0 || n > 10) {
        printf("Invalid input.  Array size must be between 1 and 10.\n");
        return 1;  // Indicate an error
    }

    printf("Enter The Elements of the Arrays :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Initialize max with the first element of the array
    max = a[0];

    // Iterate through the rest of the array to find the maximum
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("The Maximum Element of the Array is : %d\n", max);

    return 0;
}