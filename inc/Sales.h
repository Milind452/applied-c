/**
* @file Sales.h
*
*/
#ifndef __SALES_H__
#define __SALES_H__

#include <stdint.h>

/**
* Check if a number is prime or not
* @param[in] Number Integer to be checked
* @param[out] primeFlag Integer indicating if number is prime or not
* @note Returns 1 if prime and 0 if not prime
*/
typedef struct Sales {
    char* cityName;
    char* companyName;
    uint32_t modelNumber;
    float productCost;
    char* monthOfSale;
}sales;

#endif