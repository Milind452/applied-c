/**
* @file ReadCsv.c
*
*/
#include <stdlib.h> 
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
    FILE* fp = fopen("resources/sales.csv", "r"); 
  
    if (!fp) {
        printf("Can't open file\n"); 
    }
  
    else {
        char* buffer = malloc(1024);
        char* value;
        // int row = 0; 
        // int column = 0; 
        if (buffer == NULL) {
            printf ("No memory\n");
        }
        int i = 0;
        while (fgets(buffer, 1023, fp)) { 
            if ((strlen(buffer)>0) && (buffer[strlen (buffer) - 1] == '\n')) {
                buffer[strlen(buffer) - 1] = '\0';       
            }

            value = strtok(buffer, ",");
            sale[i].cityName = value;

            value = strtok(NULL, ",");
            sale[i].companyName = value;

            value = strtok(NULL, ",");
            sale[i].modelNumber = atoi(value);

            value = strtok(NULL, ",");
            sale[i].productCost = atof(value);

            value = strtok(NULL, ",");
            sale[i].monthOfSale = value;
            
            // printf("\n"); 
            // printf("index i= %i  ID: %i, %s, %s, %s \n",i, sale[i].ID , sale[i].name, sale[i].dateIn , sale[i].dateOut);

            i++;
        } 
        fclose(fp); 
    } 
} 