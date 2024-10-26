#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strlenfunc(char *size)
{
    int start = 0;
    while (size[start] != '\0')
    {
        start++;
    }
    return start;
}

char *strcatfunc(char *word1, char *word2)
{
    int net_size = strlen(word1) + strlen(word2) + 1;
    char *concat = (char *)malloc(net_size * sizeof(char));
    int i = 0;
    for (; word1[i] != '\0'; i++)
    {
        concat[i] = word1[i];
    }
    for (int j = 0; word2[j] != '\0'; j++)
    {
        concat[j + i] = word2[j];
    }
    concat[net_size - 1] = '\0';
    return concat;
}

int strcmpfunc(char *word1, char *word2)
{
    int start1 = 0;
    int start2 = 0;
    while (start1 <= strlen(word1) - 1 && start2 <= strlen(word2) - 1)
    {
        if (word1[start1] != word2[start2])
        {
            return word1[start1] - word2[start2];
        }
        start1++;
        start2++;
    }
}

char *strcpyfunc(char *destination, char *source)
{
    char *ptr = destination;
    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
    return ptr;
}
int main()
{

    int n;
    printf("Enter the size of the first word\n");
    scanf("%d", &n);
    char *word1 = (char *)malloc(n * sizeof(char));
    printf("Enter the word\n");
    scanf("%s", word1);
    int m;
    printf("Enter the size of the second word\n");
    scanf("%d", &m);
    char *word2 = (char *)malloc(m * sizeof(char));
    printf("Enter the word\n");
    scanf("%s", word2);

    printf("The size of word 1 is %d\n", strlenfunc(word1));
    printf("The size of word 1 is %d\n", strlenfunc(word2));
    printf("words concatenated are %s\n", strcatfunc(word1, word2));
    printf("strcmp function using the two strings is %d\n", strcmpfunc(word1, word2));

    printf("1st given string before the strcpy function is %s\n", word1);
    printf("1st given string after the strcpy function is %s\n", strcpyfunc(word1, word2));
    return 0;
}