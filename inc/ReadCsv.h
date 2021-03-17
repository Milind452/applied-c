/**
* @file ReadCsv.h
*
*/
#ifndef __READCSV_H__
#define __READCSV_H__

#include "Sales.h"

extern int size;

/**
* Read the CSV file and put data in an array of structures
* @param[in] sale Empty array of structures to store data
* @return Array of structures with information read from CSV file
*/
sales *readCsv(sales *sales);

#endif