#include <stdio.h>

int main()
{

    int n1, n2, n3, n4;
    char ch1, ch2, ch3;
    float f1;
    printf("Enter a number\n");
    scanf("%d", &n1);
    printf("ENter a character\n");
    scanf("%c%c", &ch1, &ch1);
    printf("Again ENter a character\n");
    scanf("%c%c", &ch2, &ch2);

    printf("Enter a number\n");
    scanf("%d", &n2);

    printf("Enter a number\n");
    scanf("%d", &n3);

    printf("Enter a floating point number\n");
    scanf("%f", &f1);

    printf("Enter a number\n");
    scanf("%d", &n4);
    printf("Again Enter a character\n");
    scanf("%c%c", &ch3, &ch3);

    printf("The output in the order of the input is\n");
    printf("%d\n", n1);
    printf("%c\n", ch1);
    printf("%c\n", ch2);
    printf("%d\n", n2);
    printf("%d\n", n3);
    printf("%f\n", f1);
    printf("%d\n", n4);
    printf("%c\n", ch3);

    return 0;
}