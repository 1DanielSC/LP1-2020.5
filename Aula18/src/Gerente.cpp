#include "Funcionario.h"
#include "Gerente.h"

#include <iostream>
#include <string>

Gerente::Gerente(std::string nome, int idade, std::string cargo, int numeroAtendimentos)
	: Funcionario{nome, idade}, Cargo{cargo}, NumeroAtendimentos{numeroAtendimentos} {}

void Gerente::setNumeroAtendimentos(int numeroAtendimentos) {this->NumeroAtendimentos = numeroAtendimentos;}
void Gerente::setCargo(std::string cargo) {this->Cargo = cargo;}

std::string Gerente::getCargo() {return this->Cargo;}
int Gerente::getNumeroAtendimentos() {return this->NumeroAtendimentos;}

void Gerente::display()
{
	std::cout << "Informacoes funcionario: Gerente" <<std::endl;
	std::cout << "Nome: " << this->getNome() <<std::endl;
	std::cout << "Idade: " << this->getIdade()<<std::endl;
	std::cout << "Cargo: " << this->Cargo <<std::endl;
	std::cout << "Numero Atendimentos: " << this->NumeroAtendimentos <<std::endl;
	std::cout << std::endl;
}