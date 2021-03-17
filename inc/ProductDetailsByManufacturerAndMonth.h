/**
 * @file ProductDetailsByManufacturerAndMonth.h
 *
 */
#ifndef __PRODUCTDETAILSBYMANUFACTURERANDMONTH_H__
#define __PRODUCTDETAILSBYMANUFACTURERANDMONTH_H__

#include "Sales.h"

extern int size;

/**
 * Details of all product sold in a given month for given manufacturer
 * @param[in] sale Array of structures to be searched
 * @param[in] manufacturer Given manufacturer to be searched in the list
 * @param[in] month Given month to be searched in the list
 * @return Details of sales for given manufacturer in given month
 */
sales *productDetailsByManufacturerAndMonth(sales *sale, char *manufacturer,
                                            char *month);

#endif