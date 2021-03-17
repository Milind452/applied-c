/**
 * @file ProductDetailsByCity.h
 *
 */
#ifndef __PRODUCTDETAILSBYCITY_H__
#define __PRODUCTDETAILSBYCITY_H__

#include "Sales.h"

extern int size;

/**
 * Details of all sales from all manufacturers in a given city
 * @param[in] sale Array of structures to be searched
 * @param[in] city Given city to be searched in the list
 * @return Details of sales from all manufacturers in the given city
 */
sales *productDetailsByCity(sales *sale, char *city);

#endif