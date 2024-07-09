// search_invoice.c

#include "restaurant.h"

void searchInvoice() {
    struct orders order;
    char name[50];
    int invoiceFound = 0;

    printf("Enter the name of the customer:\t");
    fgets(name, 50, stdin);
    name[strlen(name) - 1] = 0;

    FILE *fp = fopen("RestaurantBill.dat", "r");

    if (fp == NULL) {
        printf("No invoices found.\n");
        return;
    }

    printf("\t*****Invoice of %s*****\n", name);

    while (fread(&order, sizeof(struct orders), 1, fp)) {
        float tot = 0;
        if (!strcmp(order.customer, name)) {
            generateBillHeader(order.customer, order.date);
            for (int i = 0; i < order.numOfItems; i++) {
                generateBillBody(order.itm[i].item, order.itm[i].qty, order.itm[i].price);
                tot += order.itm[i].qty * order.itm[i].price;
            }
            generateBillFooter(tot);
            invoiceFound = 1;
        }
    }

    if (!invoiceFound) {
        printf("Sorry, no invoice found for %s.\n", name);
    }

    fclose(fp);
}
