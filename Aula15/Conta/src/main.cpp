#include "Conta.h"
#include "Cliente.h"
#include "Agencia.h"
#include <string>
#include <iostream>

int main(int argc, char const *argv[])
{
	Conta exemplo{"Daniel Sehn Colao", "108.999.999-48", 250.0};
	exemplo.Display();

	Conta copy(exemplo);
	copy.Display();
	
	std::cout << "Quantidade de contas: " << exemplo.quantidadeContas << std::endl;

	return 0;
}
