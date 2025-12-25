#include <stdio.h>

int main() {
    int a[10], n, sum = 0, i, search_element, found = 0;

    printf("Enter the number of elements you want in the array (up to 10):\n");
    scanf("%d", &n);

    if (n > 10 || n <= 0) {
        printf("Invalid input. Please enter a number between 1 and 10.\n");
        return 1; // Exit with an error code
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i]; // Calculate the sum of elements
    }

    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("The sum of the elements in the array is: %d\n", sum);

    // Search for an element
    printf("Enter the element to search for:\n");
    scanf("%d", &search_element);

    for (i = 0; i < n; i++) {
        if (a[i] == search_element) {
            printf("Element %d found at index %d\n", search_element, i);
            found = 1;
            break; // Stop searching after the first occurrence
        }
    }

    if (!found) {
        printf("Element %d not found in the array\n", search_element);
    }

    return 0;
}