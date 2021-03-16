/**
* @file ProductDetailsByMonth.c
*
*/
#include <stdlib.h> 
#include <stdio.h> 
#include <string.h>
#include "Sales.h"
#include "ProductDetailsByMonth.h"


/**
* Check if a number is prime or not
* @param[in] Number to be checked
* @return If number is prime or not
* @note Returns 1 if prime and 0 if not prime
*/
 
  
// Driver Code 
sales *productDetailsByMonth(sales *sale, char* month) {
    // printf("%s\n", month);
    sales *saleDetails = (sales*)malloc(1 * sizeof(sales));
    int i = 0;
    int position = 0;
    while(sale[i].cityName != NULL) {
        // printf("i = %d and month = %s\n", i, sale[i].monthOfSale);
        if(strcmp(sale[i].monthOfSale, month) == 0) {
            // printf("pos = %d and month = %s\n", position, sale[i].monthOfSale);
            saleDetails[position].cityName = strdup(sale[i].cityName);
            saleDetails[position].companyName = strdup(sale[i].companyName);
            saleDetails[position].modelNumber = sale[i].modelNumber;
            saleDetails[position].productCost = sale[i].productCost;
            saleDetails[position].monthOfSale = strdup(sale[i].monthOfSale);
            // memcpy(&saleDetails[position], &sale[i], sizeof(sale[i]));

            position++;
            saleDetails = (sales*)realloc(saleDetails, (position + 1) * sizeof(sales));
        }
        i++;
    }
    i = 0;
    while(saleDetails[i].monthOfSale != NULL) {
        printf("**********");
        printf("%s", saleDetails[i].cityName);
        printf("\t%s", saleDetails[i].companyName);
        printf("\t%d", saleDetails[i].modelNumber);
        printf("\t%.2f", saleDetails[i].productCost);
        printf("\t%s\n", saleDetails[i].monthOfSale);
        i++;
    }
    return saleDetails;
}