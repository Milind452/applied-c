/**
* @file ProductDetailsByCity.c
*
*/
#include <stdlib.h> 
#include <string.h>
#include "Sales.h"
#include "ProductDetailsByCity.h"


sales *productDetailsByCity(sales *sale, char* city) {
    sales *saleDetails = (sales*)malloc(1 * sizeof(sales));
    int position = 0;
    for(int i = 0; i < size; i++) {
        if(strcmp(sale[i].cityName, city) == 0) {
            memcpy(&saleDetails[position], &sale[i], sizeof(sale[i]));
            position++;
            saleDetails = (sales*)realloc(saleDetails, (position + 1) * sizeof(sales));
        }
    }
    size = position;
    return saleDetails;
}