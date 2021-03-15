/**
* @file ReadCsv.c
*
*/
#include <conio.h> 
#include <stdio.h> 
#include <string.h>
#include "ReadCsv.h"
#include "Sales.h"

/**
* Check if a number is prime or not
* @param[in] Number to be checked
* @return If number is prime or not
* @note Returns 1 if prime and 0 if not prime
*/
 
  
// Driver Code 
void readCsv(sales *sale) {
    FILE* fp = fopen("C://Users//40012844//Desktop//applied-c//resources//sales.csv", "r"); 
  
    if (!fp) {
        printf("Can't open file\n"); 
    }
  
    else {
        char buffer[1024]; 
        int row = 0; 
        int column = 0; 

        while (fgets(buffer, 1024, fp)) { 
            column = 0; 
            row++;

            char* value = strtok(buffer, ", "); 
  
            while (value) {
                if (column == 0) { 
                    // printf("City Name :"); 
                    sale[row]->cityName = value;
                }
                if (column == 1) { 
                    // printf("\tManufacturer :");
                    sale[row].companyName = value; 
                } 
                if (column == 2) { 
                    // printf("\tModel :"); 
                    sale[row].modelNumber = atoi(value);
                }
                if (column == 3) { 
                    // printf("\tCost :"); 
                    sale[row].productCost = atof(value);
                }
                if (column == 4) { 
                    // printf("\tMonth :"); 
                    sale[row].monthOfSale = value;
                }
                printf("%s", value); 
                value = strtok(NULL, ", "); 
                column++; 
            } 
            printf("\n"); 
        } 
        fclose(fp); 
    } 
} 