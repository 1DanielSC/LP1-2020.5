#include "Cliente.h"
#include <string>
#include <iostream>

Cliente::Cliente(std::string nome, std::string dataAdmissao)
	: Nome{nome}, DataAdmissao{dataAdmissao} {}


void Cliente::setNome(std::string nome) {this->Nome = nome;}
void Cliente::setDataAdmissao(std::string dataAdmissao) {this->DataAdmissao = dataAdmissao;}

std::string Cliente::getNome() {return this->Nome;}
std::string Cliente::getDataAdmissao() {return this->DataAdmissao;}
