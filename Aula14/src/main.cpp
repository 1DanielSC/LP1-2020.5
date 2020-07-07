#include "Conta.h"
#include "Cliente.h"
#include "Agencia.h"
#include <string>
#include <iostream>

int main(int argc, char const *argv[])
{
	Conta exemplo{"88254", "Daniel Sehn Colao", "10" ,250.0};
	std::cout << "Nome da conta: "<< exemplo.cliente.Nome << std::endl;
  std::cout << "Nome da conta: "<< exemplo.cliente.CPF << std::endl;
	
  exemplo.agencia.CNPJ = "141084";
  exemplo.agencia.Numero = "0001";
  exemplo.agencia.Nome = "Inter";

  std::cout << "CNPJ da agencia: " << exemplo.agencia.CNPJ << std::endl;
  std::cout << "Numero da agencia: " << exemplo.agencia.Numero << std::endl;
  std::cout << "Nome da agencia: " << exemplo.agencia.Nome << std::endl;
  


	return 0;
}
