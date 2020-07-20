#ifndef CAIXA_H
#define CAIXA_H

#include "Funcionario.h"
#include <string>

class Caixa: public Funcionario{

private:
	int ClientesAtendidos;
	int TotalVendas;
	double Receita;

public:

	Caixa(std::string nome = "None", int idade = 0, int clientesAtendidos = 0, int totalVendas = 0, double receita = 0.0);

	void setClientesAtendidos(int clientesAtendidos);
	void setTotalVendas(int totalVendas);
	void setReceita(double receita);

	int getClientesAtendidos();
	int getTotalVendas();
	double getReceita();

	void display();	

};


#endif