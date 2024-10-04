#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *arr;
    int index;
    int sec_max;
    printf("ENter the size of the array\n");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter the array elements\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("The array is\n");
    for (int i = 0; i < n; i++)
        printf("%d\t ", arr[i]);

    printf("\n");
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            index = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[i - 1] && i != index)
        {
            sec_max = arr[i];
        }
    }

    printf("The second max element is %d\n", sec_max);
    return 0;
}