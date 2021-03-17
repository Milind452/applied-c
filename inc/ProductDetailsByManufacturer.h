/**
* @file ProductDetailsByManufacturer.h
*
*/
#ifndef __PRODUCTDETAILSBYMANUFACTURER_H__
#define __PRODUCTDETAILSBYMANUFACTURER_H__

#include "Sales.h"


extern int size;

/**
* Details of all products sold which are manufactured by a given manufacturer
* @param[in] sale Array of structures to be searched
* @param[in] manufacturer Given manufacturer to be searched in the list
* @return Details of sales for given manufacturer
*/
sales *productDetailsByManufacturer(sales *sale, char* manufacturer);

#endif