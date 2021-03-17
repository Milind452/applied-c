/**
* @file ProductDetailsByMonth.h
*
*/
#ifndef __PRODUCTDETAILSBYMONTH_H__
#define __PRODUCTDETAILSBYMONTH_H__

#include "Sales.h"


extern int size;

/**
* Details of all products sold in given month
* @param[in] sale Array of structures to be searched
* @param[in] month Given month to be searched in the list
* @return Details of sales for given month
*/
sales *productDetailsByMonth(sales *sale, char* month);

#endif