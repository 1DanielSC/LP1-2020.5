#include "Conta.h"

#include <string>

Conta::Conta(std::string conta_numero, std::string _titular, double _saldo)
	: numero{conta_numero}, titular{_titular}, saldo{_saldo} {}

void Conta::sacar(double valor)
{
	this->saldo -= valor;
}

void Conta::depositar(double valor)
{
	this->saldo += valor;
}

void Conta::transferir(double valor, Conta& conta_receber)
{
	this->saldo -= valor;
	conta_receber.saldo += valor; 
}