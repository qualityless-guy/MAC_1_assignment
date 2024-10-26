#include <Stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter elements into the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array before operation\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        if (start == 1 && end == n - 2)
            break;

        start++;
        end--;
    }

    printf("\narray after reversing the first and last two elements is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}