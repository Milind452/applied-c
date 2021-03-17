/**
* @file MaximumSaleMonth.c
*
*/
#include <string.h>
#include <stdlib.h>
#include "Sales.h"
#include "MaximumSaleMonth.h"


char *maximumSaleMonth(sales *sale) {
    float months[12] = {0.0};
    for(int i = 0; i < size; i++) {
        if(strcmp(sale[i].monthOfSale, "jan") == 0) {
            months[0] += sale[i].productCost;
        } else if(strcmp(sale[i].monthOfSale, "feb") == 0) {
            months[1] += sale[i].productCost;
        } else if(strcmp(sale[i].monthOfSale, "mar") == 0) {
            months[2] += sale[i].productCost;
        } else if(strcmp(sale[i].monthOfSale, "apr") == 0) {
            months[3] += sale[i].productCost;
        } else if(strcmp(sale[i].monthOfSale, "may") == 0) {
            months[4] += sale[i].productCost;
        } else if(strcmp(sale[i].monthOfSale, "jun") == 0) {
            months[5] += sale[i].productCost;
        } else if(strcmp(sale[i].monthOfSale, "jul") == 0) {
            months[6] += sale[i].productCost;
        } else if(strcmp(sale[i].monthOfSale, "aug") == 0) {
            months[7] += sale[i].productCost;
        } else if(strcmp(sale[i].monthOfSale, "sep") == 0) {
            months[8] += sale[i].productCost;
        } else if(strcmp(sale[i].monthOfSale, "oct") == 0) {
            months[9] += sale[i].productCost;
        } else if(strcmp(sale[i].monthOfSale, "nov") == 0) {
            months[10] += sale[i].productCost;
        } else if(strcmp(sale[i].monthOfSale, "dec") == 0) {
            months[11] += sale[i].productCost;
        }
    }
    float max = months[0];
    int monthNumber = 0;
    for(int i = 1; i < 12; i++) {
        if(months[i] > max) {
            max = months[i];
            monthNumber = i;
        }
    }
    
    char *month = (char*)malloc(3 * sizeof(month));
    switch(monthNumber) {
        case 0:
            strcpy(month, "jan");
            break;
        case 1:
            strcpy(month, "feb");
            break;
        case 2:
            strcpy(month, "mar");
            break;
        case 3:
            strcpy(month, "apr");
            break;
        case 4:
            strcpy(month, "may");
            break;
        case 5:
            strcpy(month, "jun");
            break;
        case 6:
            strcpy(month, "jul");
            break;
        case 7:
            strcpy(month, "aug");
            break;
        case 8:
            strcpy(month, "sep");
            break;
        case 9:
            strcpy(month, "oct");
            break;
        case 10:
            strcpy(month, "nov");
            break;
        case 11:
            strcpy(month, "dec");
            break;
        default:
            return NULL;
            break;
    }
    return month;
}