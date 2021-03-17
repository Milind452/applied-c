/**
* @file TotalSales.h
*
*/
#ifndef __TOTALSALES_H__
#define __TOTALSALES_H__

#include "Sales.h"


extern int size;

/**
* Total amount of sales in the year
* @param[in] sale Array of structures to be searched
* @return Sum of all sales made in that year
*/
double totalSales(sales *sales);

#endif