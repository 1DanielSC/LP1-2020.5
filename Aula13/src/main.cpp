#include "Conta.h"
#include <string>
#include <iostream>

int main(int argc, char const *argv[])
{
	Conta exemplo{"88254", "Daniel Sehn Colao", 250.0};
	std::cout << "Saldo inicial: " << exemplo.saldo << std::endl;
	exemplo.sacar(50.0);

	std::cout << "Saldo apos saque: " << exemplo.saldo << std::endl;

	exemplo.depositar(300.0);
	std::cout << "Saldo apos o deposito: " << exemplo.saldo << std::endl;
	

	Conta exemplo_2 {"81354", "Joao"};
	std::cout << "Saldo inicial da conta " << exemplo_2.titular << ": " <<exemplo_2.saldo << std::endl;

	std::cout << "Transferir dinheiro da conta " << exemplo.titular << " para a conta " << exemplo_2.titular << std::endl;

	exemplo.transferir(400.0, exemplo_2);

	std::cout << "Saldo final da conta " << exemplo.titular << ": "<< exemplo.saldo << std::endl;
	std::cout << "Saldo final da conta " << exemplo_2.titular << ": "<< exemplo_2.saldo << std::endl;

	return 0;
}