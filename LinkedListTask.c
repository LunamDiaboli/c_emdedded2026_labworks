#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char name[50];
    double price;
    unsigned int pages;
    char language[50];
    double weight;
    unsigned int publication_date;
    struct Book *next;
};

int main(int argc, char** argv) {

    printHeader();

    struct Book *first = NULL;
    struct Book *second = NULL;
    struct Book *third = NULL;
    struct Book *fourth = NULL;
    struct Book *fifth = NULL;
    struct Book *sixth = NULL;
    struct Book *seventh = NULL;

    first = (struct Book*) malloc(sizeof(struct Book));
    second = (struct Book*) malloc(sizeof(struct Book));
    third = (struct Book*) malloc(sizeof(struct Book));
    fourth = (struct Book*) malloc(sizeof(struct Book));
    fifth = (struct Book*) malloc(sizeof(struct Book));
    sixth = (struct Book*) malloc(sizeof(struct Book));
    seventh = (struct Book*) malloc(sizeof(struct Book));

    if (first == NULL || second == NULL || third == NULL || fourth == NULL || fifth == NULL || sixth == NULL || seventh == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // First book
    strcpy(first->name, "Harry Potter and the Philosopher's Stone");
    first->price = 10.99;
    first->pages = 223;
    strcpy(first->language, "English");
    first->weight = 495.0;
    first->publication_date = 1997;
    first->next = second;

    // Second book
    strcpy(second->name, "Harry Potter and the Chamber of Secrets");
    second->price = 10.99;
    second->pages = 251;
    strcpy(second->language, "English");
    second->weight = 515.0;
    second->publication_date = 1998;
    second->next = second;
    second->next = third;

    // Third book
    strcpy(third->name, "Harry Potter and the Prisoner of Azkaban");
    third->price = 10.99;
    third->pages = 317;
    strcpy(third->language, "English");
    third->weight = 585.0;
    third->publication_date = 1999;
    third->next = fourth;

    // Fourth book
    strcpy(fourth->name, "Harry Potter and the Goblet of Fire");
    fourth->price = 14.99;
    fourth->pages = 636;
    strcpy(fourth->language, "English");
    fourth->weight = 1000.0;
    fourth->publication_date = 2000;
    fourth->next = fifth;

    // Fifth book
    strcpy(fifth->name, "Harry Potter and the Order of the Phoenix");
    fifth->price = 16.99;
    fifth->pages = 766;
    strcpy(fifth->language, "English");
    fifth->weight = 1100.0;
    fifth->publication_date = 2003;
    fifth->next = sixth;

    // Sixth book
    strcpy(sixth->name, "Harry Potter and the Half-Blood Prince");
    sixth->price = 16.99;
    sixth->pages = 607;
    strcpy(sixth->language, "English");
    sixth->weight = 950.0;
    sixth->publication_date = 2005;
    sixth->next = seventh;

    // Seventh book
    strcpy(seventh->name, "Harry Potter and the Deathly Hallows");
    seventh->price = 17.99;
    seventh->pages = 607;
    strcpy(seventh->language, "English");
    seventh->weight = 648.0;
    seventh->publication_date = 2007;
    seventh->next = NULL;
    
    struct Book *temp;
    while (first != NULL) {
        temp = first;
        printf("Name: %s\n", temp->name);
        printf("Price: %.2lf Pound Sterling\n", temp->price);
        printf("Pages: %u\n", temp->pages);
        printf("Language: %s\n", temp->language);
        printf("Weight: %.2lf g\n", temp->weight);
        printf("Year of publication: %u\n", temp->publication_date);
        printf("\n");
        free(temp);
        first = first->next;
    }

    return 0;
}