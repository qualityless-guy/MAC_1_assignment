#include <stdio.h>
#include <stdlib.h>
int main()
{

    int w = 4, x = 4, y = 4, z = 4;
    int ****arr = (int ****)malloc(w * sizeof(int ***));
    for (int i = 0; i < w; i++)
    {
        arr[i] = (int ***)malloc(x * sizeof(int **));
        for (int j = 0; j < x; j++)
        {
            arr[i][j] = (int **)malloc(y * sizeof(int *));
            for (int k = 0; k < y; k++)
            {
                arr[i][j][k] = (int *)malloc(z * sizeof(int));
            }
        }
    }

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < y; k++)
            {
                for (int l = 0; l < z; l++)
                {
                    arr[i][j][k][l] = 20;
                }
            }
        }
    }

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < y; k++)
            {
                for (int l = 0; l < z; l++)
                {
                    printf("arr[%d][%d][%d][%d] is:- %d", i, j, k, l, arr[i][j][k][l]);
                    printf("\n");
                }
            }
            printf("\n");
        }
    }

    return 0;
}