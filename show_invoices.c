// show_invoices.c

#include "restaurant.h"

void showAllInvoices() {
    struct orders order;
    FILE *fp = fopen("RestaurantBill.dat", "r");

    if (fp == NULL) {
        printf("No invoices found.\n");
        return;
    }

    printf("\n  *****Your Previous Invoices*****\n");

    while (fread(&order, sizeof(struct orders), 1, fp)) {
        float tot = 0;
        generateBillHeader(order.customer, order.date);
        for (int i = 0; i < order.numOfItems; i++) {
            generateBillBody(order.itm[i].item, order.itm[i].qty, order.itm[i].price);
            tot += order.itm[i].qty * order.itm[i].price;
        }
        generateBillFooter(tot);
    }

    fclose(fp);
}
