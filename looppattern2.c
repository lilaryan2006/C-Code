#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the Number to form this pattern: \n");
    scanf("%d", &n);

    /*
     1
     12
     123
     1234...
    */

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }

    return 0;
}