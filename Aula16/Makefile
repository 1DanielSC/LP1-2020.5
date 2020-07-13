FILES = main.o Funcionario.o Empresa.o
COMPILER = g++
PROGRAM = Aula16
GCC_FLAGS = -I include -std=c++11 -Wall

all: $(PROGRAM)

$(PROGRAM): main.o Funcionario.o Empresa.o
	$(COMPILER) $(GCC_FLAGS) $(FILES) -o $(PROGRAM)

main.o: src/main.cpp include/Empresa.h include/Funcionario.h
	$(COMPILER) $(GCC_FLAGS) -c src/main.cpp

Funcionario.o: src/Funcionario.cpp include/Funcionario.h
	$(COMPILER) $(GCC_FLAGS) -c src/Funcionario.cpp
  
Empresa.o: src/Empresa.cpp include/Empresa.h
  $(COMPILER) $(GCC_FLAGS) -c src/Empresa.cpp

.PHONY: clean run

clean:
	rm *.o

run: Aula14
	./$(PROGRAM)
