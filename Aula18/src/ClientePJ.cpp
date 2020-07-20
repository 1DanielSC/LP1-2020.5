#include "Cliente.h"
#include "ClientePJ.h"
#include <iostream>
#include <string>

ClientePJ::ClientePJ(std::string nome, std::string dataAdmissao, std::string cnpj, std::string razaoSocial)
	:Cliente{nome, dataAdmissao}, CNPJ{cnpj}, RazaoSocial{razaoSocial} {}


std::string ClientePJ::getCNPJ() {return this->CNPJ;}
std::string ClientePJ::getRazaoSocial() {return this->RazaoSocial;}

void ClientePJ::setCNPJ(std::string cnpj) {this->CNPJ = cnpj;}
void ClientePJ::setRazaoSocial(std::string razaoSocial) {this->RazaoSocial = razaoSocial;}


void ClientePJ::display(){
	std::cout << "Informacoes cliente: Pessoa Juridica" << std::endl;
	std::cout << "Nome: " << this->getNome() << std::endl;
	std::cout << "Data Admissao: " << this->getDataAdmissao() << std::endl;
	std::cout << "CNPJ: " << this->CNPJ << std::endl;
	std::cout << "Razao Social: " << this->RazaoSocial  << std::endl;
	std::cout << std::endl;
}