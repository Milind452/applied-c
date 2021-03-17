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
void demo(void) {
    sales *sale = NULL;
    sale = readCsv(sale);
    TEST_ASSERT_EQUAL_MESSAGE(4516665.250855, totalSales(sale), "Negative test case[-2]");
}

// void testPrime(void)
// {
//   TEST_ASSERT_EQUAL_MESSAGE(1, checkPrime(37), "Standard test case[37]");
//   TEST_ASSERT_EQUAL_MESSAGE(1, checkPrime(97), "Standard test case[97]");
//   TEST_ASSERT_EQUAL_MESSAGE(0, checkPrime(10), "Standard test case[10]");
// }
// void testOneZero(void)
// {
//   TEST_ASSERT_EQUAL_MESSAGE(0, checkPrime(1), "Border test case[1]");
//   TEST_ASSERT_EQUAL_MESSAGE(0, checkPrime(0), "Border test case[0]");
// }
// void testNegative(void)
// {
//   TEST_ASSERT_EQUAL_MESSAGE(0, checkPrime(-2), "Negative test case[-2]");
// }

int test(void)
{
    UNITY_BEGIN();

    RUN_TEST(demo);
//   RUN_TEST(testPrime);
//   RUN_TEST(testOneZero);
//   RUN_TEST(testNegative);

  return UNITY_END();
}
