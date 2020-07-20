#include "Funcionario.h"
#include <string>

Funcionario::Funcionario(std::string nome, int idade)
	:Nome{nome}, Idade{idade} {}
	
void Funcionario::setNome(std::string nome) {this->Nome = nome;}
void Funcionario::setIdade(int idade) {this->Idade = idade;}

std::string Funcionario::getNome() {return this->Nome;}
int Funcionario::getIdade() {return this->Idade;}