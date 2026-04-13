#include<stdio.h>

struct Book {
    char title[100];
    char author[50];
    int year;
    float price;
} lib[10];
int main() {
    for (int i = 1; i <= 10; i++) {
        printf("\nEnter details for book %d:\n\n", i);
        printf("Title: ");
        scanf("%s", lib[i].title);
        printf("Author: ");
        scanf("%s", lib[i].author);
        printf("Year of Publication: ");
        scanf("%d", &lib[i].year);
        printf("Price: ");
        scanf("%f", &lib[i].price);
    }

    printf("\nLibrary Records:\n\n");

    for (int i = 1; i <= 10; i++) {
        printf("Title: %s\n", lib[i].title);
        printf("Author: %s\n", lib[i].author);
        printf("Year of Publication: %d\n", lib[i].year);
        printf("Price: %.2f\n\n", lib[i].price);
    }

    return 0;
}
