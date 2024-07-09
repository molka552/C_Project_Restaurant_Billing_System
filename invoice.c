// invoice.c

#include "restaurant.h"

void generateInvoice() {
    struct orders ord;
    char saveBill = 'y';

    printf("\nPlease enter the name of the customer:\t");
    fgets(ord.customer, 50, stdin);
    ord.customer[strlen(ord.customer) - 1] = 0;
    strcpy(ord.date, __DATE__);

    printf("\nPlease enter the number of items:\t");
    scanf("%d", &ord.numOfItems);

    float total = 0;
    for (int i = 0; i < ord.numOfItems; i++) {
        fgetc(stdin);
        printf("\n\n");
        printf("Please enter the item %d:\t", i + 1);
        fgets(ord.itm[i].item, 20, stdin);
        ord.itm[i].item[strlen(ord.itm[i].item) - 1] = 0;
        printf("Please enter the quantity:\t");
        scanf("%d", &ord.itm[i].qty);
        printf("Please enter the unit price:\t");
        scanf("%f", &ord.itm[i].price);
        total += ord.itm[i].qty * ord.itm[i].price;
    }

    generateBillHeader(ord.customer, ord.date);
    for (int i = 0; i < ord.numOfItems; i++) {
        generateBillBody(ord.itm[i].item, ord.itm[i].qty, ord.itm[i].price);
    }
    generateBillFooter(total);

    printf("\nDo you want to save the invoice [y/n]:\t");
    scanf(" %c", &saveBill);

    if (saveBill == 'y') {
        FILE *fp = fopen("RestaurantBill.pdf", "a+");
        fwrite(&ord, sizeof(struct orders), 1, fp);
        if (fwrite != 0)
            printf("\nSuccessfully saved");
        else
            printf("\nError saving");
        fclose(fp);
    }
}
