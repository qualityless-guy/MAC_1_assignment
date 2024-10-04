#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int temp = n;
    int rev = 0;
    while (temp > 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    if (rev == n)
    {
        printf("%d is palindrome", n);
    }
    else
    {
        printf("%d is not palindrome", n);
    }
    return 0;
}