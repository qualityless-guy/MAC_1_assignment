#include <stdio.h>

int main()
{
    char repeat = 'r';
    while (repeat == 'r')
    {
        int a, b;
        printf("Enter the value of a\n");
        scanf("%d", &a);
        printf("Enter the value of b\n");
        scanf("%d", &b);

        printf("Enter 1 to perform addition between %d and %d\n", a, b);
        printf("Enter 2 to perform subtraction between %d and %d\n", a, b);
        printf("Enter 3 to perform multiplication between %d and %d\n", a, b);
        printf("Enter 4 to perform division between %d and %d\n", a, b);
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Addition of %d and %d is %d\n", a, b, a + b);
            break;
        case 2:
            printf("Subtraction of %d and %d is %d\n", a, b, a - b);
            break;
        case 3:
            printf("Multiplication of %d and %d is %d\n", a, b, a * b);
            break;
        case 4:
            printf("Division of %d and %d is %.2f\n", a, b, (float)a / (float)b);
            break;
        default:
            printf("Wrong choice given");
        }
        printf("Enter 'r' to perform calculation again else press any other key to exit ");
        scanf("%c%c", &repeat, &repeat);
    }
    return 0;
}