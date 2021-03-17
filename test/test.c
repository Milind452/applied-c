#include <string.h>

#include "unity.h"
#include "test.h"

#include "Sales.h"
#include "ReadCsv.h"
#include "TotalSales.h"
#include "MinimumSaleMonth.h"
#include "MaximumSaleMonth.h"
#include "ProductDetailsByMonth.h"
#include "ProductDetailsByManufacturer.h"
#include "ProductDetailsByManufacturerAndMonth.h"
#include "ProductDetailsByCity.h"
#include "SortByCost.h"
#include "ShowSales.h"

void setUp(){}

void tearDown(){}

int size;
void Test_TotalSales(void) {
    sales *sale = NULL;
    sale = readCsv(sale);
    TEST_ASSERT_EQUAL(1416665.250854, totalSales(sale));
}

void Test_MaximumSaleMonth(void) {
    sales *sale = NULL;
    sale = readCsv(sale);
    TEST_ASSERT_EQUAL_STRING("feb", maximumSaleMonth(sale));
}

void Test_MinimumSaleMonth(void) {
    sales *sale = NULL;
    sale = readCsv(sale);
    TEST_ASSERT_EQUAL_STRING("mar", minimumSaleMonth(sale));
}

void Test_SortByCost(void) {
    int flag = 1;
    sales *sale = NULL;
    sales *sortedSale = NULL;
    sale = readCsv(sale);
    sortedSale = sortByCost(sale);
    for(int i = 1; i < size; i++) {
        if(sortedSale[i].productCost < sortedSale[i - 1].productCost) {
            flag = 0;
            break;
        }
    }
    TEST_ASSERT_EQUAL(1, flag);
}

void Test_ProductDetailsByCity(void) {
    int flag = 1;
    sales *sale = NULL;
    sales *saleDetails = NULL;
    sale = readCsv(sale);
    saleDetails = productDetailsByCity(sale, "Delhi");
    for(int i = 0; i < size; i++) {
        if(strcmp(saleDetails[i].cityName, "Delhi") != 0) {
            flag = 0;
            break;
        }
    }
    TEST_ASSERT_EQUAL(1, flag);
    TEST_ASSERT_EQUAL(10, size);
}

void Test_ProductDetailsByMonth(void) {
    int flag = 1;
    sales *sale = NULL;
    sales *saleDetails = NULL;
    sale = readCsv(sale);
    saleDetails = productDetailsByMonth(sale, "jan");
    for(int i = 0; i < size; i++) {
        if(strcmp(saleDetails[i].monthOfSale, "jan") != 0) {
            flag = 0;
            break;
        }
    }
    TEST_ASSERT_EQUAL(1, flag);
    TEST_ASSERT_EQUAL(5, size);
}

void Test_ProductDetailsByManufacturer(void) {
    int flag = 1;
    sales *sale = NULL;
    sales *saleDetails = NULL;
    sale = readCsv(sale);
    saleDetails = productDetailsByManufacturer(sale, "HP");
    for(int i = 0; i < size; i++) {
        if(strcmp(saleDetails[i].companyName, "HP") != 0) {
            flag = 0;
            break;
        }
    }
    TEST_ASSERT_EQUAL(1, flag);
    TEST_ASSERT_EQUAL(5, size);
}

void Test_ProductDetailsByManufacturerAndMonth(void) {
    int flag = 1;
    sales *sale = NULL;
    sales *saleDetails = NULL;
    sale = readCsv(sale);
    saleDetails = productDetailsByManufacturerAndMonth(sale, "Asus", "apr");
    for(int i = 0; i < size; i++) {
        if(strcmp(saleDetails[i].companyName, "Asus") != 0) {
            flag = 0;
            break;
        }
        if(strcmp(saleDetails[i].monthOfSale, "apr") != 0) {
            flag = 0;
            break;
        }
    }
    TEST_ASSERT_EQUAL(1, flag);
    TEST_ASSERT_EQUAL(1, size);
}



int test(void)
{
    UNITY_BEGIN();

    RUN_TEST(Test_TotalSales);
    RUN_TEST(Test_MaximumSaleMonth);
    RUN_TEST(Test_MinimumSaleMonth);
    RUN_TEST(Test_SortByCost);
    RUN_TEST(Test_ProductDetailsByCity);
    RUN_TEST(Test_ProductDetailsByMonth);
    RUN_TEST(Test_ProductDetailsByManufacturer);
    RUN_TEST(Test_ProductDetailsByManufacturerAndMonth);

    return UNITY_END();
}
