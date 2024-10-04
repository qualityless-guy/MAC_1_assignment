#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the dimension of the square matrix\n");
    scanf("%d", &n);
    int **arr = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        arr[i] = (int *)malloc(n * sizeof(int));
    }

    printf("Enter the elements into the matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The given matrix is\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    printf("The sum of the left diagonal is:- ");
    int pointer_left_one = 0, pointer_left_two = 0;
    int sum_left = 0, sum_right = 0;
    while (pointer_left_one <= n - 1 && pointer_left_two <= n - 1)
    {
        sum_left += arr[pointer_left_one][pointer_left_two];
        pointer_left_one++;
        pointer_left_two++;
    }
    printf("%d\n", sum_left);
    printf("The sum of the right diagonal is:- ");
    int pointer_right_one = 0, pointer_right_two = n - 1;
    while (pointer_right_one <= n - 1 && pointer_right_two >= 0)
    {
        sum_right += arr[pointer_right_one][pointer_right_two];
        pointer_right_one++;
        pointer_right_two--;
    }
    printf("%d\n", sum_right);
    return 0;
}