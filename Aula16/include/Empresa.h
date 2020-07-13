#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>
#include <vector>
#include "Funcionario.h"

class Empresa
{
private:
	std::string Nome;
	std::string CNPJ;
	

public:
	Empresa(std::string nome = "None", std::string cnpj = "None");
	~Empresa();


	void setNome(std::string nome);
	void setCNPJ(std::string cnpj);

	std::string getNome();
	std::string getCNPJ();

	void AumentoSalarial(std::vector<Funcionario*> Funcionarios);

};


#endif
