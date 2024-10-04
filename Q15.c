#include <stdio.h>

int recurse(int n)
{
    static int count = 1;
    static int sum = 0;

    sum += count;
    if (count == n)
    {
        return sum;
    }
    count++;
    return recurse(n);
}
int main()
{
    printf("Enter a number\n");
    int n;
    scanf("%d", &n);
    printf("The sum of the digits from 1 to %d is %d", n, recurse(n));
    return 0;
}