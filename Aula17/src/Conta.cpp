#include "Conta.h"

#include <string>
#include <iostream>

int Conta::quantidadeContas = 0;

Conta::Conta(std::string nome_cliente, std::string cpf_cliente, double _saldo, std::string conta_numero)
	: cliente {nome_cliente, cpf_cliente}, agencia{}, Numero{conta_numero}, Saldo{_saldo,}
	{
		quantidadeContas++;
	}

Conta::Conta(const Conta& otherAccount)
{
	this->cliente.Nome = otherAccount.cliente.Nome;
	this->cliente.CPF = otherAccount.cliente.CPF;

	this->agencia.Agencia_nome = otherAccount.agencia.Agencia_nome;
	this->agencia.Agencia_numero = otherAccount.agencia.Agencia_numero;
	this->agencia.CNPJ = otherAccount.agencia.CNPJ;

	this->Numero = otherAccount.Numero;
	this->Saldo = otherAccount.Saldo;

	quantidadeContas++;
}


Conta::~Conta()
{
	quantidadeContas--;
}


void Conta::sacar(double valor)
{
	this->Saldo -= valor;
}

void Conta::depositar(double valor)
{
	this->Saldo += valor;
}

void Conta::transferir(double valor, Conta& conta_receber)
{
	this->Saldo -= valor;
	conta_receber.Saldo += valor; 
}

void Conta::Display()
{
	std::cout << "Informacoes da conta do cliente: " << this->cliente.Nome << std::endl;
	
	std::cout << "CPF do cliente: " << this->cliente.CPF << std::endl;

	std::cout << "Agencia do cliente: " << this->agencia.Agencia_nome << std::endl;
	std::cout << "Numero da agencia do cliente: " << this->agencia.Agencia_numero << std::endl;
	std::cout << "CNPJ: " << this->agencia.CNPJ << std::endl;

	std::cout << "Saldo da conta: " << this->Saldo << std::endl;
	std::cout << "Numero da conta: " << this->Numero << std::endl;

}