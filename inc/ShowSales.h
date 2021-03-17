/**
* @file ShowSales.h
*
*/
#ifndef __SHOWSALES_H__
#define __SHOWSALES_H__

#include "Sales.h"


extern int size;

/**
* Display the array of structures in a readable format
* @param[in] sale Array of structures to be displayed
* @param[in] message Message to be displayed with the sales details 
*/
void showSales(sales *sale, char* message);

#endif