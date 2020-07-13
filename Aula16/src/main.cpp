#include "Funcionario.h"
#include "Empresa.h"
#include <string>
#include <iostream>

void DeallocateFuncionarios(std::vector<Funcionario*> Funcionarios)
{
	for(auto& funcionario: Funcionarios)
	{
		delete funcionario;
	}

	Funcionarios.clear();
}


int main()
{
	Empresa empresa;
	empresa.setNome("Extra");
	empresa.setCNPJ("42.318.949/0001-84");

	std::cout << "Insira o numero de funcionarios: ";
	int numeroFuncionarios;
	std::cin >> numeroFuncionarios;
	std::cin.ignore();

	std::vector<Funcionario*> Funcionarios;

	std::string nomeFuncionario;
	double salarioFuncionario;
	std::string dataAdmissaoFuncionario;

	for (int i = 0; i < numeroFuncionarios; i++)
	{
		std::cout << "Insira o nome do funcionario " << i <<": ";
		getline(std::cin, nomeFuncionario);

		std::cout << "Insira o salario do funcionario " << i <<": ";
		std::cin >> salarioFuncionario;
		std::cin.ignore();

		std::cout << "Insira a data de admissao do funcionario " << i <<": ";
		getline(std::cin, dataAdmissaoFuncionario);
		std::cout << std::endl;

		Funcionarios.push_back(new Funcionario(nomeFuncionario, salarioFuncionario, dataAdmissaoFuncionario, empresa.getNome()));
	}

	empresa.AumentoSalarial(Funcionarios);
	DeallocateFuncionarios(Funcionarios);

	return 0;
}
