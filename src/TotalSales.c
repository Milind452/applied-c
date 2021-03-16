/**
* @file ReadCsv.c
*
*/
#include <stdlib.h> 
#include <stdio.h> 
#include <string.h>
#include "Sales.h"
#include "TotalSales.h"


/**
* Check if a number is prime or not
* @param[in] Number to be checked
* @return If number is prime or not
* @note Returns 1 if prime and 0 if not prime
*/
 
  
// Driver Code 
double totalSales(sales *sale) {
    double sum = 0;
    int i = 0;
    while(sale[i].productCost != 0) {
        sum += sale[i].productCost;
        i++;
    }
    return sum;
}