/**
 * @file Sales.h
 *
 */
#ifndef __SALES_H__
#define __SALES_H__

#include <stdint.h>

/**
 * Structure with City Name; Manufacturer of the Product; Model Number; Cost of
 * the product and Month of sale
 */
typedef struct {
  char *cityName;
  char *companyName;
  uint32_t modelNumber;
  float productCost;
  char *monthOfSale;
} sales;

#endif