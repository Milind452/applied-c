/**
 * @file ShowSales.c
 *
 */
#include "ShowSales.h"
#include "Sales.h"
#include <stdio.h>
#include <string.h>

void showSales(sales *sale, char *message) {
  printf("\n\n***************  %s  ***************\n", message);
  for (int i = 0; i < size; i++) {
    printf("%s", sale[i].cityName);
    printf("\t%s", sale[i].companyName);
    printf("\t%d", sale[i].modelNumber);
    printf("\t%.2f", sale[i].productCost);
    printf("\t%s\n", sale[i].monthOfSale);
  }
  for (size_t i = 0; i < 34 + strlen(message); i++) {
    printf("*");
  }
  printf("\n");
}