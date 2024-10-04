#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int count = 0;
    if (n == 1)
    {
        printf("1 is neither prime nor composite\n");
    }
    else
    {

        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
                count++;
        }

        if (count == 0)
        {
            printf("%d is a prime number\n", n);
        }
        else
        {
            printf("%d is not a prime number\n", n);
        }
    }
    return 0;
}