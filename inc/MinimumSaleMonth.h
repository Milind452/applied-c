/**
 * @file MinimumSaleMonth.h
 *
 */
#ifndef __MINIMUMSALEMONTH_H__
#define __MINIMUMSALEMONTH_H__

#include "Sales.h"

extern int size;

/**
 * Find the month with minimumamount of sales
 * @param[in] sale Array of structures to be searched
 * @return Month with minimum amount of sales
 */
char *minimumSaleMonth(sales *sales);

#endif