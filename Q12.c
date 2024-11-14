#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *arr;
    int index;
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

    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int sec_max = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > sec_max && arr[i] != max)
        {
            sec_max = arr[i];
        }
    }

    printf("The second max element is %d\n", sec_max);
    return 0;
}