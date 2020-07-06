FILES = main.o Conta.o
COMPILER = g++
PROGRAM = Aula13
GCC_FLAGS = -I include -std=c++11 -Wall

all: $(PROGRAM)

$(PROGRAM): main.o Conta.o
	$(COMPILER) $(GCC_FLAGS) $(FILES) -o $(PROGRAM)

main.o: src/main.cpp include/Conta.h
	$(COMPILER) $(GCC_FLAGS) -c src/main.cpp

Time.o: src/Conta.cpp include/Conta.h
	$(COMPILER) $(GCC_FLAGS) -c src/Conta.cpp


.PHONY: clean run

clean:
	rm *.o $(PROGRAM)

run: Prova02
	./$(PROGRAM)
