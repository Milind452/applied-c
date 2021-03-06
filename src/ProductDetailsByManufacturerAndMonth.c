/**
 * @file ProductDetailsByManufacturerAndMonth.c
 *
 */
#include "ProductDetailsByManufacturerAndMonth.h"
#include "Sales.h"
#include <stdlib.h>
#include <string.h>

sales *productDetailsByManufacturerAndMonth(sales *sale, char *manufacturer,
                                            char *month) {
  sales *saleDetails = (sales *)malloc(1 * sizeof(sales));
  int position = 0;
  for (int i = 0; i < size; i++) {
    if (strcmp(sale[i].companyName, manufacturer) == 0 &&
        strcmp(sale[i].monthOfSale, month) == 0) {
      memcpy(&saleDetails[position], &sale[i], sizeof(sale[i]));
      position++;
      saleDetails =
          (sales *)realloc(saleDetails, (position + 1) * sizeof(sales));
    }
  }
  size = position;
  return saleDetails;
}