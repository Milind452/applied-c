#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
// #include "Sales.h"
// #include "ReadCsv.h"
// #include "TotalSales.h"
// #include "MinimumSaleMonth.h"
// #include "ProductDetailsByMonth.h"

typedef struct {
    char* cityName;
    char* companyName;
    uint32_t modelNumber;
    float productCost;
    char* monthOfSale;
}sales;

// static int size = 0;

sales *readCsv(sales *sale) {
    sale = (sales*)malloc(sizeof(sales) * 1);
    FILE* fp = fopen("resources/dummy.csv", "r"); 
  
    if (!fp) {
        printf("Can't open file\n"); 
    }
  
    else {
        char* buffer = malloc(256);
        char* value;
        if (buffer == NULL) {
            printf ("No memory\n");
        }
        int i = 0;
        while (fgets(buffer, 255, fp) != NULL) { 
            if ((strlen(buffer)>0) && (buffer[strlen (buffer) - 1] == '\n')) {
                buffer[strlen(buffer) - 1] = '\0';       
            }

            value = strtok(buffer, ",");
            sale[i].cityName = strdup(value);

            value = strtok(NULL, ",");
            sale[i].companyName = strdup(value);

            value = strtok(NULL, ",");
            sale[i].modelNumber = atoi(value);

            value = strtok(NULL, ",");
            sale[i].productCost = atof(value);

            value = strtok(NULL, ",");
            sale[i].monthOfSale = strdup(value);
            
            // printf("\n"); 
            // printf("index i= %i  ID: %i, %s, %s, %s \n",i, sale[i].ID , sale[i].name, sale[i].dateIn , sale[i].dateOut);

            i++;
            sale = (sales*)realloc(sale, (i + 1) * sizeof(sales));
        } 
        // size = i;
        fclose(fp); 
        return sale;
    }
}

int main() {
    sales *sale = NULL;
    sale = readCsv(sale);
    printf("%zu,%zu\n", sizeof(sale),sizeof(sale[0]));
    // printf("%d", size);
    int i = 0;
    while(sale[i].cityName != NULL) {
    // for(i = 0; i < size; i++) {
        printf("%s", sale[i].cityName);
        printf("\t%s", sale[i].companyName);
        printf("\t%d", sale[i].modelNumber);
        printf("\t%.2f", sale[i].productCost);
        printf("\t%s\n", sale[i].monthOfSale);
        i++;
    }
    // printf("%lf", totalSales(sale));
    // printf("%s", minimumSaleMonth(sale));
    // sales *saleDetails = NULL;
    // saleDetails = productDetailsByMonth(sale, "jan");
    // i = 0;
    // while(saleDetails[i].cityName != NULL) {
    //     printf("###########");
    //     printf("%s", sale[i].cityName);
    //     printf("\t%s", sale[i].companyName);
    //     printf("\t%d", sale[i].modelNumber);
    //     printf("\t%.2f", sale[i].productCost);
    //     printf("\t%s\n", sale[i].monthOfSale);
    //     i++;
    // }
    free(sale);
    return 0;
}
