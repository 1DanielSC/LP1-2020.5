#include "Conta.h"
#include "Cliente.h"
#include "Agencia.h"
#include "ClientePJ.h"
#include "Fila.h"

#include <string>
#include <iostream>

int main(int argc, char const *argv[])
{
	Cliente exemplo{"Daniel", "108.999.999-48"};
	Cliente exemplo2{"Felipe", "108.999.780-75"};

	ClientePJ pj_1{"Casas Bahia", "05.480.087/0001-87"};
	ClientePJ pj_2{"Ricardo Eletro", "03.874.098/0002-48"};


	std::cout << "Fila dos clientes: " << std::endl;
	Fila <Cliente> fila_cliente(5);
	fila_cliente.push(exemplo);
	fila_cliente.push(exemplo2);
	fila_cliente.display();

	std::cout << std::endl;

	std::cout << "Fila dos clientes PJ: " << std::endl;

	Fila <ClientePJ> fila_clientePJ(5);
	fila_clientePJ.push(pj_1);
	fila_clientePJ.push(pj_2);
	fila_clientePJ.display();
	

	return 0;
}
