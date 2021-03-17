/**
 * @file MaximumSaleMonth.h
 *
 */
#ifndef __MAXIMUMSALEMONTH_H__
#define __MAXIMUMSALEMONTH_H__

#include "Sales.h"

extern int size;

/**
 * Find the month with maximum amount of sales
 * @param[in] sale Array of structures to be searched
 * @return Month with maximum amount of sales
 */
char *maximumSaleMonth(sales *sale);

#endif