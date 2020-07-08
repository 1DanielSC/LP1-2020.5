#include <iostream>
#include <string>
#include "Carro.h"

int main(int argc, char const *argv[])
{
	Carro exemplo("XXX-7847", "Branco", "Sedan");
	exemplo.acelerar(50);
	exemplo.frear(20);

	exemplo.Display();

	Carro copy(exemplo);
	copy.Display();

	std::cout << "Quantidade de carros construidos: " << exemplo.quantidadeCarros << std::endl;
	return 0;
}
