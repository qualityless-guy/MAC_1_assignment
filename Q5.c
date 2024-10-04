#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);

    int k = ((a >= b) && (a >= c)) ? a : ((b >= a && b >= c) ? b : c);
    printf("The maximum among the three given numbers is:- %d\n", k);
    return 0;
}