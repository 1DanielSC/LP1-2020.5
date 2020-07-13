#include "Funcionario.h"
#include <string>

int Funcionario::quantidadeFuncionarios = 0;

Funcionario::Funcionario(std::string nome, double salario, std::string dataAdmissao, std::string departamento)
	:Nome{nome}, Salario{salario}, DataAdmissao{dataAdmissao}, Departamento{departamento}
{
	quantidadeFuncionarios++;
}

Funcionario::~Funcionario()
{
	quantidadeFuncionarios--;
}

void Funcionario::setNome(std::string nome) {this->Nome = nome;}
void Funcionario::setSalario(double salario) {this->Salario = salario;}
void Funcionario::setDataAdmissao(std::string dataAdmissao) {this->DataAdmissao = dataAdmissao;}
void Funcionario::setDepartamento(std::string departamento) {this->Departamento = departamento;}


std::string Funcionario::getNome() {return this->Nome;}
double Funcionario::getSalario() {return this->Salario;}
std::string Funcionario::getDataAdmissao() {return this->DataAdmissao;}
std::string Funcionario::getDepartamento() {return this->Departamento;}