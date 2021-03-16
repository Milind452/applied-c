/**
* @file MaximumSaleMonth.c
*
*/
#include <stdlib.h> 
#include <stdio.h> 
#include <string.h>
#include "Sales.h"
#include "MaximumSaleMonth.h"


/**
* Check if a number is prime or not
* @param[in] Number to be checked
* @return If number is prime or not
* @note Returns 1 if prime and 0 if not prime
*/
 
  
// Driver Code 
char *minimumSaleMonth(sales *sale) {
    float months[12];
    int i = 0;
    while(sale[i].productCost != 0) {
        if(strcmpi(sale[i].monthOfSale, "jan")) {
            months[0] += sale[i].productCost;
        } else if(strcmpi(sale[i].monthOfSale, "feb")) {
            months[1] += sale[i].productCost;
        } else if(strcmpi(sale[i].monthOfSale, "mar")) {
            months[2] += sale[i].productCost;
        } else if(strcmpi(sale[i].monthOfSale, "apr")) {
            months[3] += sale[i].productCost;
        } else if(strcmpi(sale[i].monthOfSale, "may")) {
            months[4] += sale[i].productCost;
        } else if(strcmpi(sale[i].monthOfSale, "jun")) {
            months[5] += sale[i].productCost;
        } else if(strcmpi(sale[i].monthOfSale, "jul")) {
            months[6] += sale[i].productCost;
        } else if(strcmpi(sale[i].monthOfSale, "aug")) {
            months[7] += sale[i].productCost;
        } else if(strcmpi(sale[i].monthOfSale, "sep")) {
            months[8] += sale[i].productCost;
        } else if(strcmpi(sale[i].monthOfSale, "oct")) {
            months[9] += sale[i].productCost;
        } else if(strcmpi(sale[i].monthOfSale, "nov")) {
            months[10] += sale[i].productCost;
        } else if(strcmpi(sale[i].monthOfSale, "dec")) {
            months[11] += sale[i].productCost;
        }
        i++;
    }
    float max = months[0];
    int monthNumber = 0;
    for(i = 1; i < 12; i++) {
        if(months[i] > max) {
            max = months[i];
            monthNumber = i;
        }
    }
    
    switch(monthNumber) {
        case 0:
            return "jan";
            break;
        case 1:
            return "feb";
            break;
        case 2:
            return "mar";
            break;
        case 3:
            return "apr";
            break;
        case 4:
            return "may";
            break;
        case 5:
            return "jun";
            break;
        case 6:
            return "jul";
            break;
        case 7:
            return "aug";
            break;
        case 8:
            return "sep";
            break;
        case 9:
            return "oct";
            break;
        case 10:
            return "nov";
            break;
        case 11:
            return "dec";
            break;
    }
}