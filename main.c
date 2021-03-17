/**
* @file main.c
*
*/
#include <stdio.h>
#include <stdlib.h>
#include "Sales.h"
#include "ReadCsv.h"
#include "TotalSales.h"
#include "MinimumSaleMonth.h"
#include "MaximumSaleMonth.h"
#include "ProductDetailsByMonth.h"
#include "ProductDetailsByManufacturer.h"
#include "ProductDetailsByManufacturerAndMonth.h"
#include "ProductDetailsByCity.h"
#include "SortByCost.h"
#include "ShowSales.h"


/**
 * Stores the total number of sales details read from CSV file
 */
int saleSize;
/**
 * Stores the number of sales details
 */
int size;

int main() {
    sales *sale = NULL;
    sale = readCsv(sale);
    saleSize = size;
    showSales(sale, "All product details in CSV File");
    printf("\n\nTotal amount of sales: %lf\n", totalSales(sale));
    printf("\n\nMonth with minimum number of sales: %s\n", minimumSaleMonth(sale));
    printf("\n\nMonth with maximum number of sales: %s\n", maximumSaleMonth(sale));
    sales *saleDetails = NULL;
    saleDetails = productDetailsByMonth(sale, "jan");
    showSales(saleDetails, "All product details in given month");
    size = saleSize;
    saleDetails = NULL;
    saleDetails = productDetailsByManufacturer(sale, "HP");
    showSales(saleDetails, "All product details by given manufacturer");
    size = saleSize;
    saleDetails = NULL;
    saleDetails = productDetailsByManufacturerAndMonth(sale, "Asus", "apr");
    showSales(saleDetails, "All product details by given manufacturer in given month");
    size = saleSize;
    saleDetails = NULL;
    saleDetails = productDetailsByCity(sale, "Delhi");
    showSales(saleDetails, "All product details sold in given city");
    size = saleSize;
    sales* sortedSale = NULL;
    sortedSale = sortByCost(sale);
    showSales(sortedSale, "All product details sorted by product cost");
    free(saleDetails);
    free(sortedSale);
    free(sale);
    return 0;
}
