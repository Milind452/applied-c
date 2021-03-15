#include <stdio.h>
#include <stdint.h>
#include "Sales.h"
#include "ReadCsv.h"


int main(int argc, char *argv[]) {
    sales *sale;
    // sale->cityName = "bglr";
    // sale->companyName = "ltts";
    // sale->modelNumber = 123456789;
    // sale->productCost = 1000.01;
    // sale->monthOfSale = "jan";
    readCsv(sale);

    for(int i = 0; i < 50; i++) {
        printf("%s", sale[i].cityName);
        printf("\t%s", sale[i].companyName);
        printf("\t%d", sale[i].modelNumber);
        printf("\t%f", sale[i].productCost);
        printf("\t%s", sale[i].monthOfSale);
    }

    return 0;
}