#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    int vcount = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vcount++;
        }
    }

    fclose(file);
    printf("Total vowels in the file: %d\n", vcount);

    return 0;
}
