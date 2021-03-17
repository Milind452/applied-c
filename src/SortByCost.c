/**
 * @file SortByCost.c
 *
 */
#include "SortByCost.h"
#include "Sales.h"
#include <string.h>

sales *sortByCost(sales *sale) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (sale[j].productCost > sale[j + 1].productCost) {
        sales tmp;
        memcpy(&tmp, &sale[j], sizeof(sale[j]));
        memcpy(&sale[j], &sale[j + 1], sizeof(sale[j]));
        memcpy(&sale[j + 1], &tmp, sizeof(sale[j + 1]));
      }
    }
  }
  return sale;
}