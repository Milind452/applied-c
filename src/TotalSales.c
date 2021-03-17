/**
 * @file TotalSales.c
 *
 */
#include "TotalSales.h"
#include "Sales.h"

double totalSales(sales *sale) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += sale[i].productCost;
  }
  return sum;
}