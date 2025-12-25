#include <stdio.h>
int main()
{
    int num, table = 0;
    printf("Enter the number you want table of : ");
    scanf("%d", &num);

    do
    {
        printf("%d\n", table + 1);
        table = table + 1;

    } while (table < num);

    return 0;
}
