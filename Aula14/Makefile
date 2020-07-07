FILES = main.o Conta.o Cliente.o Agencia.o
COMPILER = g++
PROGRAM = Aula14
GCC_FLAGS = -I include -std=c++11 -Wall

all: $(PROGRAM)

$(PROGRAM): main.o Conta.o Cliente.o Agencia.o
	$(COMPILER) $(GCC_FLAGS) $(FILES) -o $(PROGRAM)

main.o: src/main.cpp include/Conta.h
	$(COMPILER) $(GCC_FLAGS) -c src/main.cpp

Conta.o: src/Conta.cpp include/Conta.h
	$(COMPILER) $(GCC_FLAGS) -c src/Conta.cpp
  
Cliente.o: src/Cliente.cpp include/Cliente.h
  $(COMPILER) $(GCC_FLAGS) -c src/Cliente.cpp

Agencia.o: src/Agencia.cpp include/Agencia.h
  $(COMPILER) $(GCC_FLAGS) -c src/Agencia.cpp

.PHONY: clean run

clean:
	rm *.o $(PROGRAM)

run: Aula14
	./$(PROGRAM)
