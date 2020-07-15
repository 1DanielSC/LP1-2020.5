#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{
private:
	std::string Nome;
	std::string CPF;

public:

	Cliente(std::string nome = "None", std::string cpf = "None");

	void setNome(std::string nome);
	void setCPF(std::string cpf);

  	std::string getNome();
  	std::string getCPF();
  	void display();
	
};

#endif