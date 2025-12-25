#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the Number to form this pattern: \n");
    scanf("%d", &n);

    /*
     1234
     1234
     1234
     1234...
    */

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf(" %d", j); // Use the i for this pattern
            /* 1111....
               2222...
               3333... */
        }
        printf("\n"); // Move newline to the end of each row
    }

    return 0;
}