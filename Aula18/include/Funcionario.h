#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario
{
private:
	std::string Nome;
	int Idade;


public:
	Funcionario(std::string nome = "None", int idade = 0);
	
	void setNome(std::string nome);
	void setIdade(int idade);

	std::string getNome();
	int getIdade();
	
};

#endif