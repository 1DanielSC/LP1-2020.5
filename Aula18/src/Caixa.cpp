#include "Funcionario.h"
#include "Caixa.h"

#include <iostream>
#include <string>

Caixa::Caixa(std::string nome, int idade, int clientesAtendidos, int totalVendas, double receita)
	:Funcionario{nome, idade}, ClientesAtendidos{clientesAtendidos}, TotalVendas{totalVendas}, Receita{receita} {}

void Caixa::setClientesAtendidos(int clientesAtendidos) {this->ClientesAtendidos = clientesAtendidos;}
void Caixa::setTotalVendas(int totalVendas) {this->TotalVendas = totalVendas;}
void Caixa::setReceita(double receita) {this->Receita = receita;}

int Caixa::getClientesAtendidos() {return this->ClientesAtendidos;}
int Caixa::getTotalVendas() {return this->TotalVendas;}
double Caixa::getReceita() {return this->Receita;}

void Caixa::display()
{
	std::cout << "Informacoes funcionario: Caixa" << std::endl;
	std::cout << "Nome: " << this->getNome() << std::endl;
	std::cout << "Idade: " << this->getIdade() << std::endl;
	std::cout << "Numero de clientes atendidos: " << this->ClientesAtendidos << std::endl;
	std::cout << "Total de vendas: " << this->TotalVendas << std::endl;
	std::cout << "Receita total: R$" << this->Receita << std::endl;
	std::cout << std::endl;
}