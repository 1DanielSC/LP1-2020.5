#include "Cliente.h"
#include <string>
#include <iostream>

Cliente::Cliente(std::string nome, std::string cpf)
	: Nome{nome}, CPF{cpf} {}


void Cliente::setNome(std::string nome) {this->Nome = nome;}
void Cliente::setCPF(std::string cpf) {this->CPF = cpf;}

std::string Cliente::getNome() {return this->Nome;}
std::string Cliente::getCPF() {return this->CPF;}

void Cliente::display()
{
  std::cout << this->getNome() << " " << this->getCPF() << std::endl;
}