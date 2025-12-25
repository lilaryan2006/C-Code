#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, y, z;
    printf("Enter two number to perform sum & product\n", a, b);
    scanf("%d%d", &a, &b);

    y = a + b;
    z = a * b;
    printf("The sum of two number is %d and the product is %d", y, z);
    return 0;
}
