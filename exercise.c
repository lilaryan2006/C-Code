#include <stdio.h>
int main()
{
    int exam;

    printf("Enter your exam percentage \n");

    scanf("%d",&exam);
    printf("You have entered %d percentage for the admission crieteria\n",exam);

    if (exam>80)
    {printf("You are eligible for the direct admission");}
    
    else if (exam>60)
    {printf("You are eligible for the enterence test");}
    
    else {printf("You are not eligible for the admission");}

    return 0;
}
