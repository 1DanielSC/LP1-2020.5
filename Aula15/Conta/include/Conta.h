#ifndef CONTA_H
#define CONTA_H

#include <string>
#include "Agencia.h"
#include "Cliente.h"

class Conta
{


public:
	Cliente cliente;
	Agencia agencia;

	std::string Numero;
	double Saldo;


	static int quantidadeContas;

	Conta(std::string nome_cliente = "None", std::string cpf_cliente = "None", double saldo = 0.0, std::string numero = "None");
	Conta(const Conta& otherAccount);
	~Conta();

	void sacar(double valor);
	void depositar(double valor);
	void transferir(double valor, Conta& conta_receber);

	void Display();
	
};



#endif
