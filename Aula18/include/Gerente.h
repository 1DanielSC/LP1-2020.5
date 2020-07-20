#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.h"
#include <string>

class Gerente: public Funcionario{
private:
	std::string Cargo;
	int NumeroAtendimentos;

public:

	Gerente(std::string nome = "None", int idade = 0, std::string cargo = "None", int numeroAtendimentos = 0);

	void setNumeroAtendimentos(int numeroAtendimentos);
	void setCargo(std::string cargo);

	std::string getCargo();
	int getNumeroAtendimentos();
	void display();
};


#endif