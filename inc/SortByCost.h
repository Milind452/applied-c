/**
* @file SortByCost.h
*
*/
#ifndef __SORTBYCOST_H__
#define __SORTBYCOST_H__

#include "Sales.h"


extern int size;

/**
* Sort the sales in ascending order based on the cost of the product
* @param[in] sale Array of structures to be searched
* @return Array of structures sorted in ascending order
* @note Returns sorted sales details
*/
sales *sortByCost(sales *sale);

#endif