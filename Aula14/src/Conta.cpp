#include "Conta.h"

#include <string>

Conta::Conta(std::string conta_numero, std::string _titular, std::string cpf, double _saldo)
	: Numero{conta_numero}, cliente {_titular, cpf}, Saldo{_saldo} {}

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
