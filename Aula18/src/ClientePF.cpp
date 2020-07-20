#include "Cliente.h"
#include "ClientePF.h"
#include <string>
#include <iostream>

ClientePF::ClientePF(std::string nome, std::string dataAdmissao, std::string cpf, int idade, std::string telefone)
	:Cliente{nome, dataAdmissao}, CPF{cpf} Idade{idade}, Telefone{telefone} {}

void ClientePF::setIdade(int idade) {this->Idade = idade;}
void ClientePF::setTelefone(std::string telefone) {this->Telefone = telefone;}

int ClientePF::getIdade() {return this->Idade;}
std::string ClientePF::getTelefone() {return this->Telefone;}

void ClientePF::display()
{
	std::cout << "Informacoes cliente: Pessoa Fisica" << std::endl;
	std::cout << "Nome: " << this->getNome() << std::endl;
	std::cout << "Data admissao: " << this->getDataAdmissao() << std::endl;
	std::cout << "CPF: " << this->CPF << std::endl;
	std::cout << "Idade: " << this->Idade  << std::endl;
	std::cout << "Telefone: " << this->Telefone  << std::endl;
	std::cout << std::endl;

}