#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{
public:

	std::string Nome;
	std::string CPF;
	Cliente(std::string nome = "None", std::string cpf = "None");
	
};

#endif