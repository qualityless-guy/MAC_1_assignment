#include <Stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }

        if (i == 1)
        {
            printf("|");
            printf("\n");
        }
        else
        {
            printf("|");
            for (int j = 1; j <= 2 * i - 3; j++)
            {
                printf("$");
            }
            printf("|");
            printf("\n");
        }
    }
    return 0;
}