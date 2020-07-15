FILES = main.o Cliente.o ClientePJ.o Agencia.o Conta.o
COMPILER = g++
PROGRAM = Aula17
GCC_FLAGS = -I include -std=c++11 -Wall

all: $(PROGRAM)

$(PROGRAM): main.o Cliente.o ClientePJ.o Agencia.o Conta.o
	$(COMPILER) $(GCC_FLAGS) $(FILES) -o $(PROGRAM)

main.o: src/main.cpp include/Cliente.h include/ClientePJ.h include/Fila.h include/Agencia.h include/Conta.h
	$(COMPILER) $(GCC_FLAGS) -c src/main.cpp

Cliente.o: src/Cliente.cpp include/Cliente.h
	$(COMPILER) $(GCC_FLAGS) -c src/Cliente.cpp

ClientePJ.o: src/ClientePJ.cpp include/ClientePJ.h
	$(COMPILER) $(GCC_FLAGS) -c src/ClientePJ.cpp


Agencia.o: src/Agencia.cpp include/Agencia.h
	$(COMPILER) $(GCC_FLAGS) -c src/Agencia.cpp

Conta.o: src/Conta.cpp include/Conta.h
	$(COMPILER) $(GCC_FLAGS) -c src/Conta.cpp


.PHONY: clean run

clean:
	rm *.o

run: Aula17
	./$(PROGRAM)
