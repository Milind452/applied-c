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
sales *readCsv(sales *sale) {
    sale = (sales*)malloc(sizeof(sales) * 1);
    FILE* fp = fopen("resources/dummy.csv", "r"); 
  
    if (!fp) {
        printf("Can't open file\n"); 
    }
  
    else {
        char* buffer = malloc(256);
        char* value;
        if (buffer == NULL) {
            printf ("No memory\n");
        }
        int i = 0;
        while (fgets(buffer, 255, fp) != NULL) { 
            if ((strlen(buffer)>0) && (buffer[strlen (buffer) - 1] == '\n')) {
                buffer[strlen(buffer) - 1] = '\0';       
            }

            value = strtok(buffer, ",");
            sale[i].cityName = strdup(value);

            value = strtok(NULL, ",");
            sale[i].companyName = strdup(value);

            value = strtok(NULL, ",");
            sale[i].modelNumber = atoi(value);

            value = strtok(NULL, ",");
            sale[i].productCost = atof(value);

            value = strtok(NULL, ",");
            sale[i].monthOfSale = strdup(value);
            
            // printf("\n"); 
            // printf("index i= %i  ID: %i, %s, %s, %s \n",i, sale[i].ID , sale[i].name, sale[i].dateIn , sale[i].dateOut);

            i++;
            sale = (sales*)realloc(sale, (i + 1) * sizeof(sales));
        } 
        // size = i;
        // printf("%d\n", size);
        fclose(fp); 
        return sale;
    }
}