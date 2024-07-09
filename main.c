// main.c

#include "restaurant.h"

int main() {
    int opt;
    char contFlag = 'y';
    char name[50];

    while (contFlag == 'y') {
        system("clear");

        printf("\t============ADV. RESTAURANT============");
        printf("\n\nPlease select your preferred operation");
        printf("\n\n1.Generate Invoice");
        printf("\n2.Show all Invoices");
        printf("\n3.Search Invoice");
        printf("\n4.Exit");

        printf("\n\nYour choice:\t");
        scanf("%d", &opt);
        fgetc(stdin);

        switch (opt) {
        case 1:
            generateInvoice();
            break;

        case 2:
            showAllInvoices();
            break;

        case 3:
            searchInvoice();
            break;

        case 4:
            printf("\n\t\t Bye Bye :)\n\n");
            exit(0);
            break;

        default:
            printf("Sorry invalid option");
            break;
        }

        printf("\nDo you want to perform another operation?[y/n]:\t");
        scanf(" %c", &contFlag); // Notice the space before %c to consume newline character
    }

    printf("\n\t\t Bye Bye :)\n\n");
    printf("\n\n");

    return 0;
}
