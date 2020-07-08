#ifndef AGENCIA_H
#define AGENCIA_H

#include <string>

class Agencia
{
public:

	std::string Agencia_nome;
	std::string Agencia_numero;
	std::string CNPJ;

	Agencia(std::string nome = "None", std::string numero = "None", std::string cnpj = "None");
	
};


#endif