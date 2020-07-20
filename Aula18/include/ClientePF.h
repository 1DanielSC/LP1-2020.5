#ifndef CLIENTEPF_H
#define CLIENTEPF_H

#include "Cliente.h"
#include <string>

class ClientePF: public Cliente{
private:

	std::string CPF;
	int Idade;
	std::string Telefone;

public:

	ClientePF(std::string nome = "None", std::string dataAdmissao = "xx/xx/xxxx", std::string cpf = "None", int idade = 0, std::string telefone = "9xxxx-xxxx");

	void setIdade(int idade);
	void setTelefone(std::string telefone);

	int getIdade();
	std::string getTelefone();

	void display();
};

#endif