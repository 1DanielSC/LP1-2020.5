#include "ClientePJ.h"
#include <iostream>

ClientePJ::ClientePJ(std::string cnpj, std::string razaoSocial)
	:CNPJ{cnpj}, RazaoSocial{razaoSocial} {}

ClientePJ::~ClientePJ() {}


std::string ClientePJ::getCNPJ() {return this->CNPJ;}
std::string ClientePJ::getRazaoSocial() {return this->RazaoSocial;}

void ClientePJ::setCNPJ(std::string cnpj) {this->CNPJ = cnpj;}
void ClientePJ::setRazaoSocial(std::string razaoSocial) {this->RazaoSocial = razaoSocial;}

void ClientePJ::display()
{
  std::cout << this->getCNPJ() << " " << this->getRazaoSocial() << std::endl;
}