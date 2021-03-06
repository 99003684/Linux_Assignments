PROJECT_NAME = ASSIGNMENT 2

SRC = Q3_multifile.c

$(PROJECT_NAME).out : $(SRC)
	gcc $^ -o $@

run : $(PROJECT_NAME).out
	./$^

clean:
	rm -rf *.o *.out
