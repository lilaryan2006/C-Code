#include <stdio.h>
int main()

{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    switch (age)
    {   
    case 5:
        printf("The age is 5\n");
        break;

    case 10:
        printf("The age is 10\n");
        break;

    case 15:
        printf("The age is 15\n");
        break;
    
    default:
        printf("Age is not 5 ,10 or 15\n");
    }


    return 0;
}