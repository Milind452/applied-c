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

$(PROJECT_NAME): all

.PHONY: run clean test all

all:
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

run: $(PROJECT_NAME)
	./$(PROJECT_OUTPUT)

test:
	gcc $(TEST_SRC) $(TEST_INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

clean:
	rm -rf $(PROJECT_OUTPUT) $(TEST_OUTPUT)
