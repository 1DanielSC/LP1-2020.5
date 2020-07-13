#include "Empresa.h"
#include "Funcionario.h"
#include <vector>
#include <string>
#include <iostream>


Empresa::Empresa(std::string nome, std::string cnpj, std::vector<Funcionario*> funcionarios)
	: Nome{nome}, CNPJ{cnpj}, Funcionarios{funcionarios} {}

Empresa::~Empresa(){}

void Empresa::setNome(std::string nome) {this->Nome = nome;}
void Empresa::setCNPJ(std::string cnpj) {this->CNPJ = cnpj;}

std::string Empresa::getNome() {return this->Nome;}
std::string Empresa::getCNPJ() {return this->CNPJ;}

void Empresa::AdicionarFuncionario(std::string nome, double salario, std::string dataAdmissao)
{
	this->Funcionarios.push_back(new Funcionario());

	this->Funcionarios.back()->setNome(nome);
	this->Funcionarios.back()->setSalario(salario);
	this->Funcionarios.back()->setDataAdmissao(dataAdmissao);
	this->Funcionarios.back()->setDepartamento(this->Nome); //Nome da empresa sera atribuido ao atributo "Departamento" da classe Funcionario

}

void Empresa::AumentoSalarial()
{
	for(auto& funcionario: Funcionarios)
	{
		std::cout << "Salario atual: " << funcionario->getSalario() << std::endl;
		funcionario->setSalario(funcionario->getSalario() * 1.1);
		std::cout << "Novo salario: " << funcionario->getSalario() << std::endl;
		std::cout << std::endl;
	}
}

void Empresa::Deallocate()
{
	for(auto& funcionario: Funcionarios)
	{
		delete funcionario;
	}

	Funcionarios.clear();
}