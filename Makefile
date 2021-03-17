SRC = src/MaximumSaleMonth.c\
      src/MinimumSaleMonth.c\
      src/ProductDetailsByCity.c\
      src/ProductDetailsByManufacturer.c\
      src/ProductDetailsByMonth.c\
      src/ProductDetailsByManufacturerAndMonth.c\
      src/ReadCsv.c\
	  src/ShowSales.c\
	  src/SortByCost.c\
	  src/TotalSales.c\
      main.c

TEST_SRC = src/MaximumSaleMonth.c\
      	   src/MinimumSaleMonth.c\
           src/ProductDetailsByCity.c\
           src/ProductDetailsByManufacturer.c\
		   src/ProductDetailsByMonth.c\
		   src/ProductDetailsByManufacturerAndMonth.c\
           src/ReadCsv.c\
		   src/ShowSales.c\
		   src/SortByCost.c\
		   src/TotalSales.c\
           unity/unity.c\
           test/test.c\
           test_main.c

INC = -Iinc

TEST_INC = -Itest\
		   -Iinc\
      	   -Iunity

PROJECT_NAME = APPLIED_C

PROJECT_OUTPUT = $(PROJECT_NAME).out

TEST_OUTPUT = TEST_$(PROJECT_NAME).out

REPORT = report

TEST_REPORT = test-report

$(PROJECT_NAME): all

.PHONY: run clean test all

all:
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)
	gcc $(TEST_SRC) $(TEST_INC) -o $(TEST_OUTPUT)

run:
	./$(PROJECT_OUTPUT)

test:
	./$(TEST_OUTPUT)

test-report:
	./$(TEST_OUTPUT) > $(REPORT)/$(TEST_REPORT)
	
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_OUTPUT) $(TEST_OUTPUT) documentation/html
