#include <stdio.h>
int main()
{
    /*label:
        printf("We are inside the label");
        goto end;
        printf("Hello World\n");
        goto label;
    end:
    printf("We are at the end");*/
    int num;
    for (int i = 0; i < 10; i++)
    {
        printf("%d", i);
        // for (int j = 0; j < 10; j++)
        {
            printf("Enter the number . enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:
    return 0;
}
