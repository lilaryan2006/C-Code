#include <stdio.h>
#include <conio.h>
main()
{
    int a, b, c;
    printf("Enter the Three Numbers to Compare: \n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            printf("This %d is The Greatest Number among Numbers", a);
        else
            printf("This %d is The Greatest Nu8mber among Numbers", c);
    }

    else
    {
        if (b > c)
            printf("This %d is The Greatest Number among Numbers", b);
        else
            printf("This %d is The Greatest Number among Numbers", c);
    }
}
