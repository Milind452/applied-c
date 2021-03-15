SRC = unity/unity.c\
src/ReadCsv.c\
main.c

INC = -Iunity\
-Iinc

PROJECT_NAME = result.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}

doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html
