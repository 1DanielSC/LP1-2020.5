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
	std::vector<Funcionario*> Funcionarios;

public:
	Empresa(std::string nome = "None", std::string cnpj = "None", std::vector<Funcionario*> funcionarios = std::vector<Funcionario*> ());
	~Empresa();


	void setNome(std::string nome);
	void setCNPJ(std::string cnpj);

	std::string getNome();
	std::string getCNPJ();

	void AumentoSalarial();
	void AdicionarFuncionario(std::string nome, double salario, std::string dataAdmissao);
	void Deallocate();
};


#endif
