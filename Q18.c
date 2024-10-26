#include <stdio.h>
#include <stdlib.h>

struct Book
{
    char title[1000];
    char author[1000];
    float price;
};
int main()
{
    struct Book *book = (struct Book *)malloc(10 * sizeof(*book));
    int i, n;
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Enter title: ");
        fgets(book[i].title, 1000, stdin);
        getchar();
        printf("Enter Author: ");
        fgets(book[i].author, 1000, stdin);
        getchar();
        printf("Enter price: ");
        scanf("%f", &book[i].price);
    }
    for (i = 0; i < 10; i++)
    {
        printf("\n\nDetails of book %d:\n", i + 1);
        printf("ID: %d\n", book[i].title);
        printf("Title: %s\n", book[i].author);
        printf("Price: Rs.%.2f\n", book[i].price);
    }
    return 0;
}