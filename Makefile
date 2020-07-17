FILES = main.o Cliente.o Estabelecimento.o Produto.o Fornecedor.o
COMPILER = g++
PROGRAM = Prova05
GCC_FLAGS = -I include -std=c++11 -Wall

all: $(PROGRAM)

$(PROGRAM): main.o Cliente.o Estabelecimento.o Produto.o Fornecedor.o
	$(COMPILER) $(GCC_FLAGS) $(FILES) -o $(PROGRAM)

main.o: src/main.cpp include/Cliente.h include/Estabelecimento.h include/Fornecedor.h include/VectorSupermercado.h
	$(COMPILER) $(GCC_FLAGS) -c src/main.cpp

Cliente.o: src/Cliente.cpp include/Cliente.h
	$(COMPILER) $(GCC_FLAGS) -c src/Cliente.cpp

Estabelecimento.o: src/Estabelecimento.cpp include/Estabelecimento.h include/Produto.h include/VectorSupermercado.h
	$(COMPILER) $(GCC_FLAGS) -c src/Estabelecimento.cpp

Produto.o: src/Produto.cpp include/Produto.h
	$(COMPILER) $(GCC_FLAGS) -c src/Produto.cpp

Fornecedor.o: src/Fornecedor.cpp include/Fornecedor.h include/VectorSupermercado.h include/Estabelecimento.h
	$(COMPILER) $(GCC_FLAGS) -c src/Fornecedor.cpp

.PHONY: clean run

clean:
	rm *.o

run: Prova05
	./$(PROGRAM)
