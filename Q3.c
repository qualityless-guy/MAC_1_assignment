#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter the first number:- a\n");
    scanf("%d", &a);
    printf("Enter the second number:- b\n");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of a is:- %d\n", a);
    printf("The Value of b is:- %d\n", b);
    return 0;
}