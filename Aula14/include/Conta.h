#ifndef CONTA_H
#define CONTA_H

#include <string>
#include "Agencia.h"
#include "Cliente.h"

class Conta
{


public:
	std::string Numero;
	double Saldo;

	Cliente cliente;
	Agencia agencia;

	Conta(std::string numero = "None", std::string titular = "None", std::string cpf = "None", double saldo = 0.0);

	void sacar(double valor);
	void depositar(double valor);
	void transferir(double valor, Conta& conta_receber);
	
};



#endif
