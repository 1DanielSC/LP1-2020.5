#include "Empresa.h"
#include "Funcionario.h"
#include <vector>
#include <string>
#include <iostream>


Empresa::Empresa(std::string nome, std::string cnpj)
	: Nome{nome}, CNPJ{cnpj} {}

Empresa::~Empresa(){}

void Empresa::setNome(std::string nome) {this->Nome = nome;}
void Empresa::setCNPJ(std::string cnpj) {this->CNPJ = cnpj;}

std::string Empresa::getNome() {return this->Nome;}
std::string Empresa::getCNPJ() {return this->CNPJ;}



void Empresa::AumentoSalarial(std::vector<Funcionario*> Funcionarios)
{
	for(auto& funcionario: Funcionarios)
	{
		std::cout << "Salario atual: " << funcionario->getSalario() << std::endl;
		funcionario->setSalario(funcionario->getSalario() * 1.1);
		std::cout << "Novo salario: " << funcionario->getSalario() << std::endl;
		std::cout << std::endl;
	}
}
