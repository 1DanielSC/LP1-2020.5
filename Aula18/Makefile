FILES = main.o Cliente.o Funcionario.o ClientePJ.o ClientePF.o Seguranca.o Caixa.o Gerente.o
COMPILER = g++
PROGRAM = Aula18
GCC_FLAGS = -I include -std=c++11 -Wall

all: $(PROGRAM)

$(PROGRAM): main.o Cliente.o Funcionario.o ClientePJ.o ClientePF.o Seguranca.o Caixa.o Gerente.o
	$(COMPILER) $(GCC_FLAGS) $(FILES) -o $(PROGRAM)

main.o: src/main.cpp include/Cliente.h include/Funcionario.h include/ClientePJ.h include/ClientePF.h include/Seguranca.h include/Caixa.h include/Gerente.h
	$(COMPILER) $(GCC_FLAGS) -c src/main.cpp

Cliente.o: src/Cliente.cpp include/Cliente.h
	$(COMPILER) $(GCC_FLAGS) -c src/Cliente.cpp

Funcionario.o: src/Funcionario.cpp include/Funcionario.h
	$(COMPILER) $(GCC_FLAGS) -c src/Funcionario.cpp

ClientePJ.o: src/ClientePJ.cpp include/ClientePJ.h include/Cliente.h
	$(COMPILER) $(GCC_FLAGS) -c src/ClientePJ.cpp

ClientePF.o: src/ClientePF.cpp include/ClientePF.h include/Cliente.h
	$(COMPILER) $(GCC_FLAGS) -c src/ClientePF.cpp

Seguranca.o: src/Seguranca.cpp include/Seguranca.h include/Funcionario.h
	$(COMPILER) $(GCC_FLAGS) -c src/Seguranca.cpp

Caixa.o: src/Caixa.cpp include/Caixa.h include/Funcionario.h
	$(COMPILER) $(GCC_FLAGS) -c src/Caixa.cpp

Gerente.o: src/Gerente.cpp include/Gerente.h include/Funcionario.h
	$(COMPILER) $(GCC_FLAGS) -c src/Gerente.cpp


.PHONY: clean run

clean:
	rm *.o

run: Aula18
	./$(PROGRAM)
