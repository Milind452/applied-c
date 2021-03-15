#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
// #include "Sales.h"
// #include "ReadCsv.h"
typedef struct Sales {
    char* cityName;
    char* companyName;
    uint32_t modelNumber;
    float productCost;
    char* monthOfSale;
}sales;
sales *sale[50];
void readCsv();
int main() {
    // sales* sale = malloc(sizeof(sales));
    // sale->cityName = "bglr";
    // sale->companyName = "ltts";
    // sale->modelNumber = 123456789;
    // sale->productCost = 1000.01;
    // sale->monthOfSale = "jan";
    readCsv();
    printf("%s\n", sale[0]->cityName);
    // for(int i = 0; i < 50; i++) {
    //     printf("%s", sale[i].cityName);
    //     printf("\t%s", sale[i].companyName);
    //     printf("\t%d", sale[i].modelNumber);
    //     printf("\t%f", sale[i].productCost);
    //     printf("\t%s", sale[i].monthOfSale);
    // }

    return 0;
}

void readCsv() {
    sale[0]->cityName = "milind";
    FILE* fp = fopen("resources/sales.csv", "r"); 
  
    if (!fp) {
        printf("Can't open file\n"); 
    }
  
    else {
        char* buffer = malloc(1024);
        char* value;
        if (buffer == NULL) {
            printf ("No memory\n");
        }
        int i = 0;
        while (fgets(buffer, 1023, fp) != NULL) { 
            if ((strlen(buffer)>0) && (buffer[strlen (buffer) - 1] == '\n')) {
                buffer[strlen(buffer) - 1] = '\0';       
            }

            value = strtok(buffer, ",");
            // sale[i].cityName = value;
            // strcpy(sale[i]->cityName, value);
            sale[i]->cityName = strdup(value);
            // free(value);

            // value = strtok(NULL, ",");
            // sale[i].companyName = value;

            // value = strtok(NULL, ",");
            // sale[i].modelNumber = atoi(value);

            // value = strtok(NULL, ",");
            // sale[i].productCost = atof(value);

            // value = strtok(NULL, ",");
            // sale[i].monthOfSale = value;
            
            // printf("\n"); 
            // printf("index i= %i  ID: %i, %s, %s, %s \n",i, sale[i].ID , sale[i].name, sale[i].dateIn , sale[i].dateOut);

            i++;
        } 
        fclose(fp); 
    } 
} 