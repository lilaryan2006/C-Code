#include <stdio.h>
int sum(int a, int b);
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

int takeover()
{
    int i;
    printf("Enter a number");
    scanf("%d", &i);
    return i;
}
int main()
{
    int a, b, c;
    a = 1000;
    b = 2450;
    // c = sum(a, b);
    c = takeover();
    // printstar(7);
    // printf("The sum is %d\n", c);
    printf("The number entered is %d\n", c);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}