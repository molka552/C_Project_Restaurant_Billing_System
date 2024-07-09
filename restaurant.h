// restaurant.h

#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Structs
struct items {
    char item[20];
    float price;
    int qty;
};

struct orders {
    char customer[50];
    char date[50];
    int numOfItems;
    struct items itm[50];
};

// Function prototypes
void generateBillHeader(char name[50], char date[30]);
void generateBillBody(char item[30], int qty, float price);
void generateBillFooter(float total);

// Function prototypes for invoice operations
void generateInvoice();
void showAllInvoices();
void searchInvoice();

#endif // RESTAURANT_H
