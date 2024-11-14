#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *sourceFile, *destFile;
    char ch;

    sourceFile = fopen(argv[1], "r");
    if (sourceFile == NULL)
    {
        perror("Error opening source file");
        return 1;
    }

    destFile = fopen(argv[2], "w");
    if (destFile == NULL)
    {
        perror("Error opening destination file");
        fclose(sourceFile); // Close the source file
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
