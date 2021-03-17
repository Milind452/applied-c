/**
 * @file ReadCsv.c
 *
 */
#include "ReadCsv.h"
#include "Sales.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

sales *readCsv(sales *sale) {
  sale = (sales *)malloc(sizeof(sales) * 1);
  FILE *fp = fopen("resources/sales.csv", "r");

  if (!fp) {
    printf("Can't open file\n");
    return NULL;
  }

  else {
    char *buffer = malloc(256);
    char *value;
    if (buffer == NULL) {
      printf("No memory\n");
      return NULL;
    }
    int i = 0;
    while (fgets(buffer, 255, fp) != NULL) {
      if ((strlen(buffer) > 0) && (buffer[strlen(buffer) - 1] == '\n')) {
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

      i++;
      sale = (sales *)realloc(sale, (i + 1) * sizeof(sales));
    }
    size = i;
    fclose(fp);
    return sale;
  }
  return NULL;
}