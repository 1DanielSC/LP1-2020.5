#ifndef CONTA_H
#define CONTA_H

#include <string>

class Conta
{


public:
	std::string numero;
	std::string titular;
	double saldo;


	Conta(std::string numero = "None", std::string titular = "None", double saldo = 0.0);

	void sacar(double valor);
	void depositar(double valor);
	void transferir(double valor, Conta& conta_receber);
	
};

#endif
