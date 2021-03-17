/**
* @file TotalSales.c
*
*/
#include "Sales.h"
#include "TotalSales.h"


double totalSales(sales *sale) {
    double sum = 0;
    for(int i = 0; i < size; i++) {
        sum += sale[i].productCost;
    }
    return sum;
}