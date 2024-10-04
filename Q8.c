#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The arryay before sorting is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The array after sorting is\n");
    if (n % 2 == 0)
    {
        int start1 = 0;
        int end1 = n / 2 - 2;
        while (start1 <= end1)
        {
            int temp = arr[start1];
            arr[start1] = arr[end1];
            arr[end1] = temp;

            start1++;
            end1--;
        }
        int start = n / 2 + 1;
        int end = n - 1;
        while (start <= end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        int start1 = 0;
        int end1 = n / 2 - 1;
        while (start1 <= end1)
        {
            int temp = arr[start1];
            arr[start1] = arr[end1];
            arr[end1] = temp;

            start1++;
            end1--;
        }
        int start = n / 2 + 1;
        int end = n - 1;
        while (start <= end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}