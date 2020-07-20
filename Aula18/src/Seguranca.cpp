#include "Funcionario.h"
#include "Seguranca.h"

#include <iostream>
#include <string>

Seguranca::Seguranca(std::string nome, int idade, std::string setor, std::string turno)
	:Funcionario{nome, idade}, SetorResponsavel{setor}, Turno{turno} {}

void Seguranca::setSetorResponsavel(std::string setor) {this->SetorResponsavel = setor;}
void Seguranca::setTurno(std::string turno) {this->Turno = turno;}

std::string Seguranca::getSetorResponsavel() {return this->SetorResponsavel;}
std::string Seguranca::getTurno() {return this->Turno;}

void Seguranca::display()
{
	std::cout << "Informacoes funcionario: seguranca" << std::endl;
	std::cout << "Nome: " << this->getNome() << std::endl;
	std::cout << "Idade: " << this->getIdade() << std::endl;
	std::cout << "Setor responsavel: " << this->SetorResponsavel << std::endl;
	std::cout << "Turno do trabalho: " << this->Turno << std::endl;
	std::cout << std::endl;
}