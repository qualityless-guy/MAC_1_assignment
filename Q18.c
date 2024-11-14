#include <stdio.h>
struct Book
{
    int isbn;
    char title[1000];
    char author[1000];
    float price;
};
int main()
{
    struct Book book[10];
    // Input details for book
    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Enter title: ");
        scanf("%[^\n]s", book[i].title);
        getchar();
        printf("Enter author: ");
        scanf("%[^\n]s", book[i].author);
        printf("Enter the ISBN number: ");
        scanf("%d", &book[i].isbn);
        printf("Enter price: ");
        scanf("%f", &book[i].price);
        getchar();
    }
    // Display details of book
    for (int i = 0; i < 10; i++)
    {
        printf("\n\nDetails of book %d:\n", i + 1);
        printf("ISBN number: %d\n", book[i].isbn);
        printf("Title: %s\n", book[i].title);
        printf("Author: %s\n", book[i].author);
        printf("Price: Rs.%.2f\n", book[i].price);
    }
    return 0;
}