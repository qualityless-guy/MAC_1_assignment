#include <stdio.h>

int fact(int n)
{
    if (n == 1)
        return n;
    return n * fact(n - 1);
}
int main()
{
    printf("Enter a number\n");
    int n;
    scanf("%d", &n);
    printf("The factorial of the given number is %d", fact(n));
}